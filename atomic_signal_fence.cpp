#include <iostream>
#include <atomic>
#include <csignal>

std::atomic<int> flag(0);

void signal_handler(int) {
    flag.store(1, std::memory_order_release);
    std::atomic_signal_fence(std::memory_order_acquire);
    // Другие операции после сигнального барьера
}

int main() {
    std::signal(SIGINT, signal_handler);

    // Ожидание изменения флага
    while (flag.load(std::memory_order_relaxed) == 0) {
         // Другие операции в основном потоке
    }

    std::cout << "Signal received!" << std::endl;

    return 0;
}
