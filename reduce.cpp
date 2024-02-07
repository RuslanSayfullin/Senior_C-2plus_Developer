#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
	int arr[] = {1, 2, 3, 4, 5};

	int sum = std::reduce(arr, arr + 5, 0, [](int a, int b) { return a + b; });

	std::cout << "Сумма элементов массива: " << sum  << std::endl;

	return 0;
}
