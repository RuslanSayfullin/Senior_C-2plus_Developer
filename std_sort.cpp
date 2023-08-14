#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 1, 4, 3, 2};
    std:sort(v.begin(), v.end());

    for(int x : v) {
        std::cout << x << " ";
    }
}

// 1 2 3 4 5
