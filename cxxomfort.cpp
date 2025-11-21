#include <iostream>
#include <cxxomfort/optional.cpp>

int main() {
    // Обьявляем переменную 'optional'
    cxxomfort::optional<int> x;

    // Проверяем, установлено ли значение 
    if (x.has_value()) {
        // Значение установлено, выводим его
        std::cout << *x << std::endl;
    } else {
        // Значение не установлено
        std::cout << "Значение не установлено" std::endl;
    }

    // Присваиваем значение переменной 'optional'
    x = 10;

    // Проверяем, установлено ли значение 
    if (x.has_value()) {
        // Значение установлено, выводим его
        std::cout << *x << std::endl;
    } else {
        // Значение не установлено
        std::cout << "Значение не установлено" std::endl;
    }

    return 0;
}