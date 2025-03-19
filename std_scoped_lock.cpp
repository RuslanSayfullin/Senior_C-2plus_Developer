#include <iostream>
#include <mutex>
#include <thread>

/*
Управление ресурсами с помощью std::scoped_lock для нескольких мьютексов
*/

std::mutex mtx1;
std::mutex mtx2;

void thread1() {
    std::scoped_lock lock(mtx1, mtx2);
    std::cout << "Thread 1 has locked both mtx1 and mtx2" << std::endl;
}

void thread2() {
    std::scoped_lock lock(mtx1, mtx2);
    std::cout << "Thread 2 has locked both mtx1 and mtx2" << std::endl;
}

int main() {
    std::thread t1(thread1);
    std::thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}