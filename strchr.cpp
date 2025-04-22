#include <iostream>
#include <cstring>

int main() {
    const char* str = "Hello, world!";
    char searchChar = 'o';

    // Ищем последнее вхождение символа 'o' в строке str
    const char* result = strrchr(str, searchChar);

    if (result) {
        std::cout << "Последнее вхождение символа '" << searchChar << "' в строке: " << result << std::endl;
    } else {
        std::cout << "Символ '" << searchChar << "' не найден в строке." << std::endl;
    }
    return 0;
}