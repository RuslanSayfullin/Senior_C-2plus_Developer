#include <iostream>

// Функция для сложения двух целых чисел
int add(int a, int b) {
    return a + b;
}

// Функционал для сложения двух чисел c плавающей точкой
double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    double doubleResult = add(2.5, 3.7);

    std::cout << "Результат для int: " << intResult << std::endl;
    std::cout << "Результат для double: " << doubleResult << std::endl;

    return 0;
}