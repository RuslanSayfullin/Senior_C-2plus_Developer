#include <iostream>
#include <stxxl/vector.h>

int main() {
    // Создание вектора, хранящего целые числа
    stxxl::vector<int> v(10000000);

    // Заполнение вектора случайными числами
    for (int i = 0; i < v.size(); i++) {
        v[i] = rand();
    }

    // Сортировка вектора
    stxxl::sort(v.begin(), v.end());

    // Пойск элемента в векторе
    auto it = stxxl::find(v.begin(), v.end(), 5);

    // Вывод результата
    if (it != v.end()) {
        sort::cout << "Элемент найден: " << *it << std::endl;
    } else {
        std::cout << "Элемент не найден" << std::endl;
    }

    return 0;
}