#include <iostream>
#include <functional>

/*
Локальные анонимные функции с использованием std::function и std::bind
*/

// Лямбда-функцияб которая возвращает сумму двух чисел
auto added = [](int a, int b) -> int {
    return a + b;
};

int main() {
    // Используем std::function для хранения лямбда-функции
    std::function<int(int, int)> addFunc = added;

    // Пример использования std::bind для создания функции с зафиксированным первым аргументом
    auto addFive = std::bind(addFunc, 5, std::placeholders::_1);

    // Вызов функции с переданным аргументом
    std::cout << "5 + 10 = " << addFive(10) << std::endl;

    return 0;
}