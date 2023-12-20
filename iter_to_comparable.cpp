#include <algorithm>
#include <iostream>

int main() {
	int arr[] = {1, 3, 5, 2, 4};

	// Сортируем массив
	std::sort(arr, arr + 5);

	// Выводим отсортированный массив
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
