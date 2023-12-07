#include <iostream>
#include <algorithm>

int main() {
	// Создаем массив
	int arr[]  = {5, 2, 8, 1, 7, 3, 9, 4, 6};

	// Размер массива
	int n = sizeof(arr) / sizeof(arr[0]);

	// Определяем начальный и конечный итератор для части массива, которую мы хотим частично отсортировать
	int k = 4;	// Количество элементов, которые мы хотим отсортировать
	auto start = arr;
	auto end = arr + k;

	// Используем Std::partial_sort для частичной сортировки
	std::partial_sort(start, end, arr + n);

	// Выводим результат
	std::cout << "Отсортированная часть массива: ";
	for (int i = 0; i < k; ++i) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}
