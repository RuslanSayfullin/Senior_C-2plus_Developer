#include <iostream>
#include <format>

int main() {
    int age = 30;
    std::string name = "John Doe";

    std::cout << std::format("My name is {1} and I am {0} years old.\n", age, name);

    return 0;
}