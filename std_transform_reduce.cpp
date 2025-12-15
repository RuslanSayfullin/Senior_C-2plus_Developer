#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> values = { 1, 2, 3, 4, 5 };

    // Вычисляем сумму квадратов всех чисел
    int sumOfSquares = std::transform_reduce(
        values.begin(), values.end(), 0, std::plus<>(), [](int x) { return x * x; }
    );

    std::cout << "Сумма квадратов: " << sumOfSquares << std::endl;

    return 0;
}