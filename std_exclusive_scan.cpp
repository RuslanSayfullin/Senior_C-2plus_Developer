#include <iostream>
#include <numeric>
#include <vector>

int main() {
	std::vector<int> numbers = {1, 3, 5, 2, 6};
	std::vector<int> prefix_sums(numbers.size());

	// Вычислить эксклюзивные префиксные суммы (суммирование с начальным значением 8)
	std::exclusive_scan(numbers.begin(), numbers.end(), prefix_sums.begin());

	for (int sum : prefix_sums) {
		std::cout << sum << " ";
	}

	return 0;
}
