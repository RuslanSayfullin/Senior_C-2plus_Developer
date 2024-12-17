#include <iostream>

// Перегруженные функции
void printValue(int x) {
    std::cout << "Integer value: " << x << std::endl;
}

void printValue(double x) {
    std::cout << "Double value: " << x << std::endl;
}

int main() {
    printValue(5);      // Вызов первой версии printValue
    printValue(3.14);   // Вызов второй версии printValue
    return 0;
}