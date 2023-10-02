#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::string chars_to_exclude = " ,!";

    // Ищем последний символ, который не содержится в chars_to_exclude
    size_t found = str.find_last_not_of(chars_to_exclude);

    if (found != std::string::npos) {
        std::cout << "Последний символ, который не содержит в chars_to_exclude: " << str[found] << std::endl;
    } else {
        std::cout << "Вся строка из символов, содержащихся в chars_to_exclude." << std::endl;
    }

    return 0;
}
