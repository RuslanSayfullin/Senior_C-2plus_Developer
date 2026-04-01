#include <iostream>
#include <any>

int main() {
    std::any x = 5;

    try {
        std::string s = std::any_cast<std::string>(x);
    } catch(const std::bad_any_cast& e) {
        std::cout << e.what() << '\n';
    }

    return 0;
}