#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("example.txt");
    file.seekg(0, ios::end);    // перемещаем указатель на конец файла
    int size = file.tellg();    // получаем текущую позицию

    cout << "The size of the file is " << size << " bytes." << endl;

    return 0;
}