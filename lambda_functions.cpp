#include <iostream>

int main() {
    int x = 10;
    auto modifyX = [&]() {
        x +=5; // Ихменяем x, захваченный по ссылке
    };

    modifyX();  // Вызываем лямбду, X не изменяется
    std::cout << x;

    return 0;
}