#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {5, 1, 7, 4, 3, 9, 0};

    // Сортируем только первые 4 элемента
    std::oartial_sort(v.begin(), v.begin() + 4, v.end());

    // Теперь v = {1, 3, 4, 5, 7, 9, 0}
    // Первые 4 отсортированы, остальные - нет

    for (int x : v) {
        std::cout << x << " ";
    }

    return 0;
}