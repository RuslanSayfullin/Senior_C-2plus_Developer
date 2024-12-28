#include <iostream>
#include <atomic>
#include <thread>

/*
std::atomic_flag является классом для реализации простой атомарной флаговой переменной. 
Он предоставляет механизм безопасной работы с флагом в многопоточной среде без необходимости использования блокировок.
*/
std::atomic_flag flag = ATOMIC_FLAG_INT;

void worker(int id) {
    while (flag.test_and_set(std::memory_order_acquire)) {
        std::cout << "Worker " << id << ": Waiting..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "Worker " << id << ": Flag acquired!" << std::endl;

    // Выполняем определенную работу...

    flag.clear(std::memory_order_release);
    std::cout << "Worker " << id << ": Flag released!" << std::endl;
}

int main() {
    std::thread workerThread1(worker, 1);
    std::thread workerThread2(worker, 2);

    // устанавливаем флаг на истину
    flag.test_and_set(std::memory_order_acquire);

    // Подождём некоторое время...
    std::this_thread::sleep_for(std::chrono::seconds(5));

    // Сбрасваем флаг а "ложь"
    flag.clear(std::memory_order_release);

    workerThread1.join();
    workerThread2.join();

    return 0;
}