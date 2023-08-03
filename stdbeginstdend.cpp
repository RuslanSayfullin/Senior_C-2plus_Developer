#include <vector>
#include <iterator>
#include <iostream>

int main() {
    
    std::vector<int> nums {1, 2, 3, 4};

    for (auto num : nums) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    // То же самое с помощью begin и end
    for (auto it = std::begin(nums); it != std::end(nums); ++it) {
        std::cout << *it << "";
    }
}

// 1 2 3 4 
// 1 2 3 4
