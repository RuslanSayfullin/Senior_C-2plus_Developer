#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	// Создаем вектор чисел
	std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	// Проверяем, разделен ли вектор на две части так, что четные числа идут первыми
	auto isEven = [](int x) { return x % 2 == 0; };
	bool partitioned = std::is_partitioned(numbers.begin(), numbers.end(), isEven);

	if (partitioned) {
		std::cout << "Диапозон разделен.\n";
	} else {
		std::cout << "Диапозон не разделен.\n";
	}

	return 0;
}
