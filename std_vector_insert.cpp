#include <iostream>
#include <vector>

/* 
Vетод std::vector::insert позволяет вставлять элементы или диапазоны элементов в вектор на указанную позицию. 
Это полезно для динамического изменения содержимого контейнера.
*/

int main() {
    std::vector<int> numbers = {1, 2, 5};

    // Вставляем элемент на позицию 2
    numbers.insert(numbers.begin() + 2, 3);

    std::cout << "После вставки элемента 3: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }

    // Вставляем диапазон элементов
    std::vector<int> extra = {6, 7, 8};
    numbers.insert(numbers.end(), extra.begin(), extra.end());

    std::cout << "\nПосле вставки диапазона {6, 7, 8}: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    

    return 0;
}