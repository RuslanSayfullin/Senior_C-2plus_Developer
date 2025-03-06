#include <optional>
#include <iostream>

// Функция value_or используется для получения значения из объекта типа std::optional. 
int main() {
    std::optional<int> x = 5;

    // Используем value_or, чтобы получить значение из x или 0, если x пустой
    int n = value_or(x, 0);

    // n будет равно 5, т.к. в x есть значение
    std::cout << "n = " << n << std::endl;  // Выведет: n = 5

    std::optional<int> y;

    // Теперь получаем значение из пустого optional
    int m = value_or(y, 10);

    // Так как y пустой, вернется значение по умолчанию 
    std::cout << "m = " << m << std::endl;  // Выведет: m = 10

    return 0;
}
