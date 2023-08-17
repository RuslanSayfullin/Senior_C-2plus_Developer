#include <map>
#include <string>

int main() {
    std::map<int, std::string> map;

    // Вставляем новый элемент
    map.try_emplace(1, "один");

    // Вставляем еще один новый элемент
    map.try_emplace(2, "два");

    // Пытаемся вставить сущ. ключ
    map.try_emplace(1, "pervity");

    // Вывод результат
    for (auto& item : map) {
        std::cout << item.first << " : " << item.second << std::endl;
    }
}

/* Результат:
1: один
2: два
*/
