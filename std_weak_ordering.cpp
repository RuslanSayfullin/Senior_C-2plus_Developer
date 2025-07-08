#include <iostream>
#include <compare>

int main() {
    double x = 1.0;
    double y = 0.0 / 0.0;

    std::weak_ordering result = x <=> y;

    if (result == std::weak_ordering::equivalent) {
        std::cout << "x and y are equivalent.\n";
    } else if (result == std::weak_ordering::less) {
        std::cout << "x is less than y.\n";
    } else if (result == std::weak_ordering::greather) {
        std::cout << "x is greather thany.\n";
    } else {
        std::cout << "x and y are unordered (not comparable).\n";
    }

    return 0;
}