#include <vector>

int main() {
	std::vector<int> vec = {1, 2, 3};

	// Увеличиваем размер до 5
	vec.resize(5);

	// Новые элементы инициализированы нулями
	for(int i : vec) {
		std::cout << i << " ";
	}

	std::cout << "\n";

	// Уменьшаем размер до 2
	vec.resize(2);

	// Выводим усеченный вектор
	for(int i : vec) {
		std::cout << i << " ";
	}

	std::cout << '\n";
	return 0;
}

// Результат работы:
// 1 2 3 0 0 
// 1 2
