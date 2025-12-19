#include <iostream>
#include <vector>

class LargeObject {
public:
    LargeObject() {
        data = new int[1000000];    // Выделяем большой массив
        std::cout << "LargeObject created" << std::endl;
    }

    ~LargeObject() {
        delete[] data;
        std::cout << "LargeObject destroyed" << std::endl;
    }

    // Конструктор копирования
    LargeObject(const LargeObject& other) {
        data = new int[1000000];
        std::copy(other.data, other.data + 1000000, data);
        std::cout << "LargeObject copied" << std::endl;
    }

    // Конструктор перемещения
    LargeObject(LargeObject&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "LargeObject moved" << std::endl;
    }

private:
    int* data;
};

void processLargeObject(LargeObject obj) {
    std::cout << "Processing LargeObject" << std::endl;
}

int main() {
    LargeObject obj1;
    processLargeObject(std::move(obj1));    // Передаем объект по перемещению

    return 0;
}
