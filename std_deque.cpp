#include <deque>
#include <iostream>

int main() {
    std::deque<int> data = {10, 20, 30, 40, 50};

    // Доступ к элементам через индексацию
    for (size_t i = 0; i < data.size(); ++i) {
        std::cout << "Element" << i << ": " << data[i] << std::endl;
    }

    return 0;
}