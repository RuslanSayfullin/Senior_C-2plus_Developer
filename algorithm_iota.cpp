#include <iostream>
#include <vector>
#include <numeric>	// для std::iota

int main() {
	std::vector<int> myVector(5);	// Создаем вектор с 5 элементами

	int startValue = 10;		// Начальное значение

	// Используем алгоритм IOTA для заполнения вектора последовательными значениями
	std::iota(myVector.begin(), myVector.end(), startValue);

	// выводим содержимое вектора
	for (int num : myVector) {
		std::cout << num << ' ' ;
	}

	return 0;
}

// Результат: 10 11 12 13 14
