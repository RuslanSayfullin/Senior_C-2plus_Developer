#include <algorithm>
#include <iostream>
#include <vector>

void doubleNumber(int &i) {
    i *= 2;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::for_each(arr.begin(), arr.end(), doubleNumber);

    for (int i : arr) {
        std::cout << i << ' ';
    }

    std::cout << '\n';
    return 0;
}

