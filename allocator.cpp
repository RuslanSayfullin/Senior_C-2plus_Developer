#include <iostream>
#include <vector>

int main() {
	// Создаем вектора с использованием стандартного аллокатора
	std::vector<int, std::allocator<int>> myVector;

	// Добавление элементов в вектор
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);

	// Перебор элементов в векторе
	for (const int& value : myVector) {
		std::cout << value << " ";
	}

	return 0;
}
