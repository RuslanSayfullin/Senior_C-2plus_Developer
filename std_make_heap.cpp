#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	std::vector<int> numbers = {3, 1, 4, 1, 5, 9};

	// Создаём большую кучу из вектора numbers
	std::make_heap(numbers.begin(), numbers.end());

	// Выводим элементы кучи (большой элемент будет в начале)
	for (int num : numbers) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return 0;
}
