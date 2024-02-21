#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> data(0);

void producer() {
        data.store(42, std::memory_order_release);
}

void consumer() {
        int value;
        while (!(value = data.load(std::memory_order_acquire))) {
            std::this_thread::yield();
        }
        std::cout << "Received: " << value << std::endl;
}

int main() {
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    producerThread.join();
    return 0;
}
