#include <iostream>
#include <set>

/* Функция set::erase() используется для удаления элементов из контейнера set. */
int main() {
    std::set<int> numbers {1, 2, 3, 4, 5};

    numbers.erase(3);

    for (int x : numbers) {
        std::cout << x << " ";
    }

    return 0;
}
