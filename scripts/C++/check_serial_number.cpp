#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
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

int main() {
    // Выполнить команды и сохранить результаты в переменных
    string ur20fbcec = exec("ethercat upload -p0 --type uint32 0x1018 0x04");
    string ur2016din = exec("ethercat upload -p0 --type string 0x9000 0x23") + "\n";
    string ur2016dop = exec("ethercat upload -p0 --type string 0x9010 0x23") + "\n";
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
    ifstream license_file("license.lic");
    string license_hash;
    getline(license_file, license_hash);
    license_file.close();

    // Вывести результат на экран
    cout << license_hash << endl;

    // Проверить, совпадают ли строки
    if (hex_dig == license_hash) {
        cout << "Лицензия действительна" << endl;
    } else {
        cout << "Необходима действительная лицензия" << endl;
    }

    return 0;
}

