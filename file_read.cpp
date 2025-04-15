#include <stdafx.h>
#include <fstream>
#include <iostream>

using namespace std;

/* Работа с файлами */
int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "rus");   // корректное отоброжение Кириллицы
    char buff[50];  // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("cppstudio.txt");  // открыли файл для чтения

    fin >> buff;    // считали первое слово из файла
    cout << buff << endl;   // напечатали это слово

    fin.getline(buff, 50);  // считали строку из файла
    fin.close();    // закрываем файл
    cout << buff << endl;   // напечатали эту строку

    system("pause");
    return 0;
}