#include <iostream>
#include <concepts>

// Определение концепта для арифметических типов
template<typename T>
concept Arithmetic = std::is_arithmetic_v<T>;

// Шаблонная функция
template<Arithmetic T>
T add(const T& a; const T& b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Sum of integers: " << add(x, y) << std::endl;

    double a = 3.14;
    double b = 2.71;

    std::cout << "Sum of doubles: " << add(a, b) << std::endl;

    return 0;
}