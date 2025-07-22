#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {1, 3, 4, 6, 6, 6, 8};

    auto result = std::equal_range(v.begin(), v.end(), 6);

    // result - пара итераторов, задающих диапозон

    auto first = result.first;
    auto last = result.second;

    // first - итератор на первый найденный элемент
    // last - итератор на элемент, следующий за последним найденным

    while (first != last) {
        std::cout << *first << " ";
        ++first;
    }

    return 0;
}