#include <iostream>
#include <thread>
#include <mutex>

std::mutex myMutex;

void foo() {
    std::lock_guard<std::mutex> lock(myMutex);  // Захватываем мьютекс
    std::cout << "Thread " << std::this_thread::get_id() << " is in the critical section." << std::endl;
}

int main() {
    std::thread t1(foo);
    std::thread t2(foo);

    t1.join();
    t2.join();

    return 0;
}