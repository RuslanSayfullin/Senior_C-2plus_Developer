#include <iostream>
#include <optional>

int main() {
    std::optional<int> maybeInt;    // Создаем пустой optional

    maybeInt = 10;

    if (maybeInt) {
        std::cout << "Значение присутсвует: " << *maybeInt  << std::endl;
    } else {
        std::cout << "Значение отсутствует" << std::endl;
    }

    maybeInt.reset();   // Обнуляем Optional

    if (maybeInt) {
        std::cout << "Значение прижсутсвует: " << *maybeInt << std::endl;
    } else {
        std::cout << "Значение отсутсвует" << std::endl;
    }

    return 0;
}