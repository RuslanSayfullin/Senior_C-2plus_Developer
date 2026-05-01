#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4};

    // Получаем указатель на данные
    int *ptr = std::data(v);

    // Выводим элементы через указатель
    for(int i=0; i < v.size(); i++) {
        std::cout << ptr[i] << ' ';
    }

    // Меняем элемент через указатель
    ptr[2] = 5;

    // Выводим измененный указатель
    for(int x : v) {
        std::cout << x << ' '; 
    }

    return 0;
}