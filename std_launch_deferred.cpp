#include <iostream>
#include <thread>

void foo() {
    std::cout << "Thread function\n";
}

int main() {
    std::thread t(foo);
    t.join();   // Запуск потока и выполнение функции foo() происходит здесь
    return 0;
}