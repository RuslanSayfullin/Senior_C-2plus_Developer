#include <iostream>
#include <vector>
#include <numeric>


// В C++ функция std::accumulate из заголовка <numeric> выполняет свёртку элементов диапазона, используя заданную операцию. 
int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Суммируем элементы
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Сумма: " << sum << std::endl; // Сумма: 15

    // Перемножаем элементы
    int product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<>());
    std::cout << "Произведение: " << product << std::endl;  // Произведение: 120

    return 0;
}