#include <iostream>
#include <cstring>

int main() {
    char str[] = "Hello, world!";

    size_t len = strlen(str);

    std::cout << "Длина строки: " << len << std::endl;

    return 0;
}