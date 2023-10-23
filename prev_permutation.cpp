#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> vec = {1, 2, 3};

	std::cout << "Исходная перестановка";
	for (int num : vec) {
		std::cout << num << " ";
	}
	std::cout << "\n";

	// Генерация предыдущей перестановки
	bool hasPrevPermutation = std::prev_permutation(vec.begin(), vec.end());

	if (hasPrevPermutation) {
		std::cout << "Предыдущая перестановка: ";
		for (int num : vec) {
			std::cout << num << " ";
		}
		std::cout << "\n";
	} else {
		std::cout << "Больше нет предыдущих перестановок. Текущая - первая в лексикографическом порядке.\n";
	}

	return 0;
}
