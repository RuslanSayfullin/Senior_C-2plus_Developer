#include <iostream>
#include <algorithm>
#include <vector>

bool isEven(int x) {
	return x % 2 == 0;
}

int main() {
	std::vector<int> v = {2, 4, 6, 8, 1, 3, 5, 7};

	if(std::is_partitioned(v.begin(), v.end(), isEven)) {
		std::cout << "Вектор разбит на четные и нечетные элементы" << std::endl;
	} else {
		std::cout << "Вектор НЕ разбит по четным и нечетным элементам" << std::endl;
	}
}

// Вектор разбит на четные и нечетные элементы
