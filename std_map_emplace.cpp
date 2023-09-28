#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;

    // Использование emplace для вставки элементов
    myMap.emplace(1, "One");
    myMap.emplace(2, "Two");
    myMap.emplace(3, "Three");

    // Попытка вставить элемент с уже сущ. ключом
    auto result = myMap.emplace(2, "New Two");
    if (!result.second) {
        std::cout << "элемент с ключом 2 уже сущ.: " << result.first->second << std::endl;
    }

    // Вывод элементов карты
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}



