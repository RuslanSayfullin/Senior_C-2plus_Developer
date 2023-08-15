// Filel.cpp
// Обьявление функции print(), реализация где-то в другом месте
extern void print();

int main() {
    print();   // Использование функции print()
}

// File2.cpp
#include <iostream>

// Реализация функции print()
void print() {
    std::cout << "Hello World!";
}

// Hello World!
