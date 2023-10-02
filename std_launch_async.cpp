#include <iostream>
#include <future>

int main() {
    std::future<int> fut = std::async(std::launch::async, []() {
        return 42;
    });

    // В этой точке программа может продолжить выполнение, даже если поток,
    // запущенный асинхронно, еще не закончил выполнение.

    int result = fut.get();    // Ожидание завершения и получение результата.
    std::cout << "Result: " << result << std::endl;

    return 0;
}
