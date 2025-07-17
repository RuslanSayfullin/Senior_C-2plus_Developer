#include <iostream>
#include <cstruct>

int main() {
    char source[] = "Hello World";
    int size = strlen(source);

    // Выделение памяти для buf
    unsigned char* buf = new unsigned char[size];

    // Копирование данных в buf
    memcpy(buf, source, size);

    // Вывод buf как строки
    for(int i = 0; i < size; i++) {
        std::cout << buf[i];
    }
    std::cout << std::endl;

    // Освобождение памяти
    delete[] buf;

    return 0;
}