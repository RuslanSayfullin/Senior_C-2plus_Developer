#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;	// Мьютекс для синхронизации доступа к данным
std::condition_variable cv;	// Условная переменная для ожидания

bool ready = false;	// Флаг, указывающий на готовность данных

void worker_thread() {
	// Выполняем какую-то работу
	std::this_thread::sleep_for(std::chrono::seconds(2));

	// Делаем данные готовыми
	{
		std::lock_guard<std::mutex> lock(mtx);
		ready = true;
	}

	// Оповещаем о готовности данных
	cv.notify_one();
}

int main() {
	// Создаем поток
	std::thread worker(worker_thread);

	// Ждём, пока данные станут готовыми
	{
		std::unique_lock<std::mutex> lock(mtx);
		cv.wait(lock, []{ return ready; });
	}

	// Данные готовы, выполняем действия с ними
	std::cout << "Данные готовы!" << std::endl;

	// Ожидаем завершения потока
	worker.join();

	return 0;
}

