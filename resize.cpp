#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};

    // Увеличиваем размер до 5
    vec.resize(5);

    // Новые элементы инициализированы нулями
    for(int i : vec) {
        std::cout << i << "\n";
    }

    // Умньшаем размер до 2
    vec.resize(2);

    // Выводим усеченный сектор
    for(int i : vec) {
        std::cout << i << "\n";
    }

    return 0;
}