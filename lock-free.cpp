#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter(0);

void incrementCounter(int n) {
    for (int i = 0; i < n; ++i) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
}

void decrementCounter(int n) {
    for (int i = 0; i < n; ++i) {
        counter.fetch_sub(1, std::memory_order_relaxed);
    }
}

int main() {
    const int numThreads = 4;
    const int numIncrements = 1000000;

    std::thread threads[numThreads];

    for (int i = 0; i < numThreads; ++i) {
        if (i % 2 == 0) {
            threads[i] = std::thread(incrementCounter, numIncrements);
        } else {
            threads[i] = std::thread(decrementCounter, numIncrements);
        }
    }

    for (int i = 0; i < numThreads; ++i) {
        threads[i].join();
    }

    std::cout << "Counter value: " << counter.load(std::memory_order_relaxed) << std::endl;

    return 0;
}