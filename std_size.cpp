#include <iostream>
#include <vector>
#include <iterator>

int main() {
	// Вектор с 3 элементами
	std::vector<int> vec = {1, 2, 3};

	// Массив из 5 элементов
	int arr[5] = {10, 20, 30, 40, 50};

	//Используем std::size
	std::cout << "Vector size: " << std::size(vec) << std::endl;
	std::cout << "Array size: " << std::size(arr) << std::endl;
	return 0;
}

// Vector size: 3
// Array size: 5
