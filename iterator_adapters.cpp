#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Итерация по вектору в обратном порядке с помощью итератора-адаптера
    for (auto it = std::rbegin(numbers); it != std::rend(numbers); ++it) {
        std::cout << *it << std::endl;
    }

    std::cout << std::endl;

    return 0;
}