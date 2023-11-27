#include <iostream>
#include <vector>
#include <algorithm>

bool isOdd(int n) {
	return n % 2 != 0;
}

int main() {
	std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto it = std::find_if(numbers.begin(), numbers.end(), isOdd);

	if (it != numbers.end()) {
		std::cout << "Первый нечетный элемент: " << *it << std::endl;
	} else {
		std::cout << "Нет нечетных элементов" << std::endl;
	}

	return 0;
}
