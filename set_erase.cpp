#include <iostream>
#include <set>

int main() {
    std::set<int> numbers {1, 2, 3, 4, 5};
    numbers.erase(3);
    for (int x : numbers) {
        std::cout << x << " ";
    }

    return 0;
}
//1 2 4 5
