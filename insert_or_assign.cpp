#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Вставка нового элемента
    myMap.insert_or_assign(1, "One");

    // Обновление существующего элемента
    myMap.insert_or_assign(1, "New One");

    // Вывод элементов
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}