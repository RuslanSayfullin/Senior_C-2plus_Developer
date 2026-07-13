#include <any>
#include <iostream>
#include <string>

int main() {
    std::any val;

    val = 10;   // store an int

    if (val.type() == typeid(int)) {
        std::cout << std::any_cast<int>(val) << std::endl;
    }

    val = 3.14f;    // store a float
    if (val.type() == typeid(float)) {
        std::cout << std::any_cast<float>(val) << std::endl;
    }

    val = std::string("Hello, world!");
    if (val.type() == typeid(std::string)) {
        std::cout << std::any_cast<std::string>(val) << std::endl;
    } 

    try {
        std::cout << std::any_cast<int>(val) << std::endl;
    } catch (const std::bad_any_cast& ex) {
        std::cout << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}