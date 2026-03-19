#include <iostream>
#include <optional>

int main() {
    std::optional<int> x = 5;

    // Получить значение из x, или 0, если x пустой
    int n = x.value_or(0);

    std::cout << "n = " << n << std::endl;


    std::optional<int> y;

    // Теперь получаем значение из пустого optional
    int m = y.value_or(10);

    std::cout << "m = " << m << std::endl;

    return 0;

}