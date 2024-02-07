#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
	int arr[] = {1, 2, 3, 4, 5};

	int sums[5];
	std::partial_sum(arr, arr + 5, sums);

	for (int i = 0; i < 5; ++i) {
	std::cout << sums[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}
