#include<mutex>
std::mutex mu;
std::condition_variable condition; // Сигнал, который может использоваться для связи между функциями

auto MyFunction()->void
{
	std::unique_lock<mutex> lock(mu);
	// Выполняем какие-либо действия
	lock.unlock();	// Разблокируем мьютекс
	condition.notify_one();	// Уведомляем MyOtherFunction, что мы закончили
}

auto MyOtherFunction()->void
{
	std::unique_lock<mutex> lock(mu);
	condition.wait(lock)	// Ждём завершения MyFunction, также можно передать лямбда-функцию для защиты от ложных пробуждений
	lock.unlock();
}

