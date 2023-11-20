#include <iostream>
#include <vector>

// Пример концепции
template <typename T>
concept Numeric = std::is_arithnetic_v<T>;

// шалонная функция, использующая концепцию
template <Numeric T>
T add(T a, T b) {
	return a+ b;
}

int main() {
	int result = add(5, 3);
	std::cout << "Result: " << result << std::endl;

	return 0;
}
