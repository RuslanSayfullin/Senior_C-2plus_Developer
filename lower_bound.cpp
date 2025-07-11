#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};

    int num = 5;

    auto it = std::lower_bound(vec.begin(), vec.end(), num);

    // it указывает на элемент 5
    std::cout << *it << std::endl;   // 5

    return 0;

}