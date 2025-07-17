#include <array>
#include <iostream>

int main() {
    // Создание массива из 3х элементов
    std::arry<int, 3> myArray = {1, 2, 3};

    // Вывод размера массива
    std::cout << "Размер массива: " << myArray.size() << std::endl;
    
    // Обращение к элементам массива, как к обычному массиву
    std::cout << myArray[0] << std::end;
    std::cout << myArray[1] << std::end;
    std::cout << myArray[2] << std::end;

    // Цикл по элементам
    for(int i : myArray) {
        std::cout << i << std::endl;
    }

    // Изменение элемента
    myArray[1] = 5;

    // Вывод измененного элемента
    for(int i : myArray) {
        std::cout << i << std::endl;
    }

    return 0;
}