#include <iostream>
#include <ctime>

const int ArraySize = 1000000;	// Размер массива данных

int main() {
	int data[ArraySize];

	// Заполните массив данными
	for (int i = 0; i < ArraySize; ++i) {
		data[i] = i;
	}

	// измерим время доступа к данным к кэше
	clock_t start_time = clock();

	long long sum = 0;
	for (int i = 0; i < ArraySize; ++i) {
		sum += data[i];
	}

	clock_t end_time = clock();
	double cache_access_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

	std::cout << "Время доступа к данным в кэше: " << cache_access_time << " секунд" << std::endl;

	// Теперь сходим кэш-промах, обратившись к данным в другом порядке
	start_time = clock();

	sum = 0;
	for (int i = ArraySize - 1; i >=0; --i) {
		sum += data[i];
	}

	end_time = clock();
	double cache_miss_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;

	std::cout << "Время кэш-промаха: " << cache_miss_time << " секунд" << std::endl;

	return 0;
}
