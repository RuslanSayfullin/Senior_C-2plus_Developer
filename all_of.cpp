#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    if (std::all_of(v.begin(), v.end(), [](int x) {
        return x > 0;
    })) {
        std::cout << "All elements are positive" << std::endl;
    } else {
        std::cout << "Not all elements are positive" << std::endl;
    }

    return 0;
}

// All elemements are positiv

