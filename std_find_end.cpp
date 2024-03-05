#include <iostream>
#include <algorithm>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 1, 2, 3};

	int* it = std::find_end(arr, arr + 8, arr + 3, arr +5);

	if (it != arr + 8) {
		std::cout << "Подпоследовательность надена: " << *it << std::endl;
	} else {
		std::cout << "Подпоследовательность не найдена" << std::endl;
	}

	return 0;
}
