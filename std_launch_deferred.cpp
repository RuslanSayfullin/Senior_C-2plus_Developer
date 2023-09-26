#include <iostream>
#include <thread>

void foo() {
    std::cout << "Thread function\n";
}

int main() {
    std::thread t(foo);
    t.join(); // Запуск потка и выполнение функции foo() Происходит здесь
    return 0;
}
