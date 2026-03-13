#include <iostream>
#include <utility>
#include <vector>

int main() {
    int a = 3, b = 5;
    // Меняем местами с помощью  std::swap
    std::swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;

    std::string s1 = "Hello", s2 = "World";
    // Меняем строки s1 и s2 местами
    std::swap(s1, s2);
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;

    std::vector<int> v1{1, 2, 3}, v2{4, 5};
    // Меняем векторы v1 и v2 местами
    std::swap(v1, v2);
    std::cout << "v1: " << v1 << ", v2: " << v2 << std::endl;

    return 0;
}