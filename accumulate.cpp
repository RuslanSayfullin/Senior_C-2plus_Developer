#include <iostream>
#include <vector>

int main() {
	std::vector<int> vec = {1, 2, 3, 4, 5};

	int sum = std:: accumulate(vec.begin(), vec.end(), 0);

	std::cout << "Сумма элементов: " << sum << std::endl;

	return 0;
}
