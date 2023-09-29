#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 2, 7, 4, 5};

    auto result = std::mismatch(v1.begin(), v1.end(), v2.begin());

    if (result.first == v1.end()) {
        std::cout << "Vectors are equal\n";
    } else {
        std::cout << "First mismatch at position "
	          << std::distance(v1.begin(), result.first)
		  << "\nv1: " << *result.first
		  << "\nv2: " << *result.second
		  << std::endl;
    }

    return 0;
}

// Результат работы кода:
// First mismatch at position 0
// v1: 3
// v2: 7
