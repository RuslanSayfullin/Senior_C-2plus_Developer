#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;	// Создание мьютекса

void worker(int id) {
	mtx.lock();	// Захват мьютекса
	std::cout << "Thread " << id << " is working." << std::endl;
	mtx.unlock();	// Освобождение мьютекса
}

int main() {
	std::thread t1(worker, 1);
	std::thread t2(worker, 2);

	t1.join();
	t2.join();

	return 0;
}
