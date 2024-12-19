#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        // Переопределение вертуальной функции
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived;
    basePtr->print();   // Вызов виртуальной функции через указатель базового класса

    delete basePtr;
    return 0;
}