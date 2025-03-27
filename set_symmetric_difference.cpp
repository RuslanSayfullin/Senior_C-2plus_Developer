#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};
    std::set<int> symmetric_difference;

    std::set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(symmetric_difference, symmetric_difference.begin()));

    std::cout << "Симметрическая разница: ";
    for (const auto& element : symmetric_difference) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}