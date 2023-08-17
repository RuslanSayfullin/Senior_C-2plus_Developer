#include <forward_list>
#include <iostream>

int main() {

    std::forward_list<int> list = {1, 2, 3};

    //Получаем итератор на элемент перед началом списка
    auto iter = list.before_begin();

    // Вставляем 0 в начале списка
    list.insert_after(iter, 0);

    // Выводим результат
    for (int x : list) {
        std::cout << x << " ";
    }

    std::cout << "\n";

    // Результат:
    // 0 1 2 3
}
