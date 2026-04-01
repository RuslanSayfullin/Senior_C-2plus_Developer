#include <iostream>
#include <utility>
#include <string>
#include <vector>

int main() {
    int a = 3, b = 5;

    // Меняем a и b местами с помощью std::swap
    std::swap(a, b);

    std::string s1 = "Hello ", s2 = "world";

    std::swap(s1, s2);

    std::vector<int> v1{1, 2, 3}, v2{4, 5};

    std::swap(v1, v2);

    return 0;
}