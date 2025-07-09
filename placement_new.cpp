#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(value) {}
    void print() {
        std::cout << "Data: " << data << std::endl;
    }
private:
    int data;
};

int main() {
    char buffer[sizeof(MyClass)];   // Выделяем память для объекта MyClass в буфере

    // Размещаем объект MyClass в заданной памяти
    MyClass *obj = new (buffer) MyClass(42);

    // Теперь мы можем использовать объект obj, как обычно
    obj->print();

    // Важно! Мы должны явно вызвать деструктор объекта
    obj->~MyClass();

    return 0;
}