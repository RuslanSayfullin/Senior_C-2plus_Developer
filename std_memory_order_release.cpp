#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> sharedData(0);

void thread1() {
    sharedData.store(42, std::memory_order_release);
}

void thread2() {
    int value = sharedData.load(std::memory_order_acquire);
    std::cout << "Value from thread1: " << value << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}