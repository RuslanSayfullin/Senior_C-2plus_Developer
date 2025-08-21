#include <iostream>
#include <vector>

int main() {
    std::vector<int> data;

    // Добавляем элементы в вектор
    for (int i = 0; i < 100; ++i) {
        data.push_back(i);
    }

    std::cout << "Capacity before shrink: " << data.capacity() << std::endl;

    // Удаляем большенство элементов
    data.erase(data.begin(), data.end() - 10);

    // Умеьшаем использование памяти то текущего размера
    data.shrink_to_fit();

    std::cout << "Capacity after shrink: " << data.capacity() << std::endl;

    return 0;
}
