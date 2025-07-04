#include <iostream>
#include <cstdlib>

int main() {
    char input[256]
    std::cout << "Введите число: ";
    std::cin >> input;

    int value = atoi(input);
    std::cout << "Введенное число - " << value << ", удвоим его = " << {value * 2};
    return 0;
}
