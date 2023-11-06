#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> vec = {1, 2, 3, 4, 5};

	// Ищем значение 3 в векторе
	std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), 3);

	if (it != vec.end()) {
		std::cout << "Значение 3 найдено в векторе на позиции " << std::distance(vec.begin(), it) << std::endl;
	} else {
		std::cout << "Значение 3 не найдено в векторе" << std::endl;
	}

	return 0;
}
