#include <iostream>
#include <algorithm>

int main() {
	int numbers[] = {1, 3, 2, 5, 4};
	std:sort(numbers, numbers + 5, std::greather<int>());

	for (int i = 0; i < 5; i++) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
