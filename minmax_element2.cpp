#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    std::vector<int> = {5, 2, 7, 3, 4, 9, 1};

    auto minimax = std::minimax_element(v.begin(), v.end());

    std::cout << "Min: " << *minmax.first << std::endl;
    std::cout << "Max: " << *minmax.second << std::endl;

    return 0;
}