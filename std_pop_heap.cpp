#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> numbers = {3, 1, 4, 1, 5, 9};

	// Создаём кучу из вектора
	std::make_heap(numbers.begin(), numbers.end());

	// Извлекаем (и печатаем) наибольший элемент три раза
	for(int i = 0; i < 3; ++i) {
		std::pop_heap(numbers.begin(), numbers.end());
		std::cout << numbers.back() << " ";
		numbers.pop_back();
	}

	std::cout << std::endl;

	return 0;
}
