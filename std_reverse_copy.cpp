#include <iostream>
#include <algorithm>
#include <vector>

/*
Функция reverse_copy относится к библиотеке <algorithm> и используется для копирования элементов из одного диапазона в другой в обратном порядке. 
*/
int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> target(5); // Создаем целевой вектор с достаточнм размером

    std::reverse_copy(source.begin(), source.end(), target.begin());

    for (const int& value : target) {
        std::cout << value << " ";
    }
    
    return 0;
}