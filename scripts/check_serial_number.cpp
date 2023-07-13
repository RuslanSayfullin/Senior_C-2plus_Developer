#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <openssl/sha.h>

using namespace std;

string exec(const char* cmd) {
    char buffer[128];
    string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw runtime_error("popen() failed!");
    try {
        while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
            result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    return result;
}

string sha256(const string str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.size());
    SHA256_Final(hash, &sha256);
    stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    return ss.str();
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Создать окно
    QWidget window;
    window.setWindowTitle("Необходима лицензия");
    window.resize(300, 70);

    QLabel label("<center>Необходима действительная лицензия</center>", &window);
    QPushButton btnQuit("&Закрыть окно", &window);

    QVBoxLayout vbox(&window);
    vbox.addWidget(&label);
    vbox.addWidget(&btnQuit);

    // Выполнить команды и сохранить результаты в переменных
    string ur20fbcec = exec("ethercat upload -p0 --type uint32 0x1018 0x04");
    string ur2016din = exec("ethercat upload -p0 --type string 0x9000 0x23");
    string ur2016dop = exec("ethercat upload -p0 --type string 0x9010 0x23");
    string ur204airtddiag = exec("ethercat upload -p0 --type string 0x9020 0x23");

    // Объединить все строки в одну
    string result_string = ur20fbcec + ur2016din + ur2016dop + ur204airtddiag;

    // Вывести результат на экран
    cout << result_string << endl;

    // Хешировать результат с помощью SHA-256
    string hex_dig = sha256(result_string);

    // Вывести результат хэширования на экран
    cout << hex_dig << endl;

    // Считать содержимое файла license.lic
    ifstream license_file("license.lic", ios::binary);
    string license_hash((istreambuf_iterator<char>(license_file)), istreambuf_iterator<char>());
    license_file.close();

    // Проверить, совпадают ли хеш-суммы
    if (hex_dig == license_hash) {
        cout << "Лицензия действительна" << endl;
    } else {
        window.show();
    }

    QObject::connect(&btnQuit, &QPushButton::clicked, &app, &QApplication::quit);

    window.show();

    return app.exec();
}