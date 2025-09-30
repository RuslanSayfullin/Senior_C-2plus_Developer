#include <iostream>

int main() {
    std::string str = "3.1415926535";
    long double value = std::stold(str);

    std::cout << "Значение: " << value << std::endl;
    return 0;
}