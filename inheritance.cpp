#include <iostram>

// Базовый класс
class Base() {
public:
    void publicMethod() {
        std::cout << "Вызван публичный метод базового класса" << std::endl;
    }

private:
    void privateMethod() {
        std::cout << "Вызван приватный метод базового класса" << std::endl;
    }
};

// Производный класс
class Derived : private Base {
// Пример использования private при наследований
public:
    void callBasePublicMethod() {
        publicMethod(); // Можно вызывать публичные методы базового класса
    }
};

int main() {
    Derived d;
    d.callBasePublicMethod();

    return 0;
}