#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int value) : value_(value) {
        std::cout << "MyClass constructor called with value: " << value_ << std::endl;
    }

    void SomeFunction() {
        std::cout << "SomeFunction called with value: " << value_ << std::endl;
    }

private:
    int value_;
};

int main() {
    std::shared_ptr<MyClass> sharedPtr = std::make_shared<MyClass>(42);

    std::weak_ptr<MyClass> weakPtr(sharedPtr);  // Создаем слабый указатель на sharedPtr

    // Проверяем, существует ли объект, на который указывает слабый указатель
    if (!weakPtr.expired()) {
        std::shared_ptr<MyClass> sharedPtr2 = weakPtr.lock();   // Получаем shared_ptr из weak_ptr
        sharedPtr2->SomeFunction(); // Вызываем метод объекта
    } else {
        std::cout << "Обьект был удален" << std::endl;
    }

    return 0;
}