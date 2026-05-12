#include <iostream>
#include <string>

int main() {
    std::string s = "hello";

    char first = s.at(0);
    std::cout << first << '\n';

    s.at(0) = 'H';
    std::cout << s << '\n';

    try {
        char c = s.at(10);
    } catch (const std::out_of_ranges& e) {
        std::cout << "Out of range error: " << e.what() << '\n';
    }

    return 0;
}