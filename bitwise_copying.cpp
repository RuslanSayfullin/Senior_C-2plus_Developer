#include <iostream>

class Test {
    int x;
    int *ptr;

public:
    Test(int x) : x(x) {
        ptr = new int[100];
    }

    Test(const Test &other) {
        x = other.x;
        ptr = other.ptr;
    }
};

int main() {
    Test obj1(5);
    Test obj2 = obj1;   // Побитовое копирование

    obj2.x = 10;
    std::cout << obj1.x << std::endl;

    delete[] obj2.ptr;
    std::cout << obj1.ptr << std::endl;

    return 0;
}