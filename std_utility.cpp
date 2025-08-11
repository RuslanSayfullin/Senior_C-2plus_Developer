#include <iostream>
#include <utility>

int main() {
    pair<int, std::string> p(10, "Hello, world!");

    std::cout << p.first << " " << p.second << std::endl;

    return 0;
}