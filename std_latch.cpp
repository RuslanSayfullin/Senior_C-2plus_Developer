#include <iostream>
#include <latch>
#include <thread>

// использование std::latch для синхронизации потоков

void task(std::latch& sync_point, int id) {
	std::cout << "Поток " << id << " начал работу\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "Поток " << id << " завершает работу\n";
	sync_point.count_down();	// Уменьшаем счётчик
}

int main() {
	std::latch sync_point(2);	// Ожидаем завершения двух потоков

	std::thread t1(task, std::ref(sync_point), 1);
	std::thread t2(task, std::ref(sync_point), 2);

	sync_point.wait();	// Ожидание, пока оба потока не завершает работу

	std::cout << "Оба потока завершены, продолжаем выполнение основного потока.\n";

	t1.join();
	t2.join();

	return 0;
}
