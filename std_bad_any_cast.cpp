#include <any>
#include <iostream>


int main() {
    try {
        std::any a = 1;
        std::string str = std::any_cast<std::string>(value);
    }

    catch (const std::bad_any_cast& e) {
        std::cerr << "Произошло исключение std::bad_any_cast: " << e.what() << std::endl;
    }

    return 0;
}