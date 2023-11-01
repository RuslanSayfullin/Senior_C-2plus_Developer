#include <iostream>
#include <mutex>
#include <thread>

std::recursive_mutex mtx;

void foo(int x) {
	mtx.lock();
	std::cout << "Locked by thread: " << x << std::endl;

	// Вложенный вызов мьютекса не вызывает блокировку
	mtx.lock();
	std::cout << "Nested lock by thread: " << x << std::endl;

	mtx.unlock();
	std::cout << "Unlocked by thread: " << x << std::endl;

	mtx.unlock();
}

int main() {
	std::thread t1(foo, 1);
	std::thread t2(foo, 2);

	t1.join();
	t2.join();

	return 0;
}
