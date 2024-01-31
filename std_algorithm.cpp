#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> v = {5, 3, 1, 4, 2};

	// Сортируем элементы вектора в порядке возрастания
	std::sort(v.begin(), v.end());

	// Выводим отсортированный вектор
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}
