#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    
    std::vector<int> v{1, 3, 5, 7, 9, 8, 6, 4, 2};

    auto boundary = std::is_sorted_until(v.begin(), v.end());

    if (boundary == v.end()) {
        std::cout << "The range is fully sorted\n";
    } else {
        std::cout << "Breach of order at element: " << *boundary << "\n";
    }

    return 0;
}

// Результат работы:
// Breach of order at element: 8
