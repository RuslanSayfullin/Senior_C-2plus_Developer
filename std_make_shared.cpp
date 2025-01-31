#include <iostream>
#include <memory>

struct MyClass {
    int value;
    MyClass(int value) : value(value) {}
    void Print() { std::cout << value << std::endl; }
};

int main() {
    std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>(42);
    ptr->Print();
    return 0;
}