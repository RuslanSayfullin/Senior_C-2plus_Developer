#include <iostream>

class Test {
    int x;
    int *ptr;

public:
    Test(int x) : x(x) {
        ptr = new int[100];
    }

    ~Test() {
        delete[] ptr;
    }

    Test(const Test &other) {
        x = other.x;
        ptr = new int[100];
        std::copy(other.ptr, other.ptr + 100, ptr);
    }

    Test& operator=(const Test& other) {
        x = other.x;
        delete[] ptr;
        ptr = new int[100];
        std::copy(other.ptr, other.ptr + 100, ptr);
        return *this;
    }
};

int main() {
    Test obj1(5);
    Test obj2 = obj1;   // Вызов контструктора копирвания

    obj2.x = 10;
    std::cout << obj1.x << std::endl;

    delete[] obj2.ptr;
    std::cout << obj1.ptr[0] << std::endl;

    return 0;
}