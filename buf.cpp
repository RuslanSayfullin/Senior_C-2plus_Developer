#include <iostream>
#include <cstring>

int main() {
    char source[] = "Hello, World!";
    int size = strlen(source);

    // выделение памяти для buf
    unsigned char* buf = new unsigned char[size];

    // Выделение данных в buf
    memcpy(buf, source, size);

    // Вывод buf как строки
    for(int i = 0; i < size; i++) {
        std::cout << buf[i];
    }
    std::cout << std::endl;

    // освобождение памяти
    delete[] buf;

    return 0;
}