#include <iostream>
#include <map>

/*
std::piecewise_construct — это часть стандартной библиотеки C++ и представляет собой структуру, 
используемую в конструкторах некоторых контейнеров, таких как std::map и std::unordered_map, д
ля конструирования элементов контейнера с использованием разных конструкторов для ключей и значений.
*/
int main() {
    std::map<int, std::string> myMap;

    // используем std::piecewise_construct для создания пар ключ-значение
    myMap.emplace(std::piecewise_construct, std::forward_as_tuple(42), std::forward_as_tuple("Hello"));

    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}