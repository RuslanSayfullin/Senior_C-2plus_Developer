#include <iostream>
#include <algorithm>

int main() {
	int arr[] = {1, 2, 3, 5, 9, 11, 12};
	int result[7];

	std::adjacent_difference(arr, arr + 7, result);

	for (int i = 0; i < 7; i++) {
		std::cout << result[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
