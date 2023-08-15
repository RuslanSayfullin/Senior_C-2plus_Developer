#include <tuple>
#include <iostream>

// Функция возвращает кортеж из int и string
std::tuple<int, std::string> getTuple() {
    return {1, "text"};
}

int main() {
    // Создание кортежа из двух элементов
    std::tuple<int, double> myTuple(10, 3.14);
    
    // Доступ к элементам по индексу
    std::cout << std::get<0>(myTuple) << "\n";
    std::cout << std::get<1>(myTuple) << "\n";

    // Доступ к элементам по типу
    int myInt = std::get<int>(myTuple);
    double myDouble = std::get<double>(myTuple);

    std::cout << myInt << "\n";
    std:cout <<  myDouble << "\n";
    
    // Вызов функции, возвращающей кортеж
    auto [x, str] = getTuple();

    std::cout << x << "\n";
    std::cout << str << "\n";
    
    return 0;
}

