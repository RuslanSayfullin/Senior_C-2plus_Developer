#include <iostream>
#include <thread>

// Функция, которая будет выполняться в отдельном потоке
void threadFunction(int id)
{
	std::cout << "Hello from thread " << id << "!\n";
}

int main()
{
	// Создание обьекта std::thread и запуск потока
	std::thread t1(threadFunction, 1);

	// Ожидание завершения потока
	t1.join();

	std::cout << "Main thread continues...\n";
	return 0;
}

// Hello from thread 1!
// Main thread continues...
