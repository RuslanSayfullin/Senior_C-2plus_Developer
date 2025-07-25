#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 3> arr = {3, 2, 1};

    if (std::prev_permutation(arr.begin(), arr.end())) {
        std::cout << "Previous permutation exists!" << "\n";
        for (int i : arr) {
            std::cout << i << ' ';
        }
    } else {
        std::cout << "Previous permutation does not exist" << "\n";
    }

    return 0;
}