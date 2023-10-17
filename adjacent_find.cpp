#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> numbers = {1, 2, 3, 4, 4, 5, 6};

	auto it = std::adjacent_find(numbers.begin(), numbers.end());

	if (it != numbers.end()) {
		std::cout << "Соседние элементы совпадают: " << *it << " и " << *(it + 1) << std::endl;
	} else {
		std::cout << "Соседние элементы не найдены." << std::endl;
	}

	return 0;
}
