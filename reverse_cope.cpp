#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> target(5);    // Создаем целевой вектор с достаточным размером

    std::reverse_copy(source.begin(), source.end(), target.begin());

    for (const int& value : target) {
        std::cout << value << " ";
    }

    return 0;

}
