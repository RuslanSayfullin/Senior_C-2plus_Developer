#include <algorithm>
#include <iostream>

int main() {
	std::vector<int>  v = {1, 2, 3, 4, 5};

	// Сортировка в порядке возрастания
	std::sort(v.begin(), v.end(), std::less_equal<int>());

	for (int x : v) {
		std::cout << x << " ";
	}
	std::cout << std::endl;

	// поиск первого элемента, равного или меньше 3
	auto it = std::find_if(v.begin(), v.end(), std::less_equal<int>(3));
	if (it != v.end()) {
		std::cout << "Найден элемент: " << *it << std::endl;
	}

	return 0;
}
