#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {5, 2, 6, 3, 2, 8};

    auto pivot = std::stable_partition(vec.begin(), vec.end(), [](int x) {
        return x%2 == 0;
    });

    std::cout << "Четные: ";
    for (auto it = vec.begin(); it != pivot; ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\nНечетные: ";
    for (auto it = pivot; it != vec.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << "\n ";

    return 0;
}