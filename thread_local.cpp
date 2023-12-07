#include <iostream>
#include <thread>

// Глобальная thread_local переменная
thread_local int thread_specific_variable = 0;

void thread_function() {
	// Изменяем значение thread_local переменной в каждом потоке
	thread_specific_variable++;
	std::cout << "Thread ID: " << std::this_thread::get_id() << ", Value: " << thread_specific_variable << std::endl;
}

int main() {
	// Создаем несколько потоков
	std::thread t1(thread_function);
	std::thread t2(thread_function);
	std::thread t3(thread_function);

	// Ожидаем завершения потоков
	t1.join();
	t2.join();
	t3.join();

	return 0;
}





