#include <iostream>

//Определение концепции "Sortable"
template <typename T>
concept Sortable = requires(T a, T b) {
	{ a < b } -> bool;	// Требование оператора "<"
	{ a > b } -> bool;	// Требование оператора ">"
};

// Функция, принимающая типы, удовлетворяющие концепции Sortable
template <Sortable T>
void sortAndPrint(T a, T b) {
	if (a < b) {
		std::cout << a << " comes before " << b << std::endl;
	} else {
		std::cout << b << " comes before " << a << std::endl;
	}
}

int main() {
	sortAndPrint(3 , 7);		// Рабтает для целых чисел
	sortAndPrint(2.5, 1.7);		// Работает для чисел с плавающей запятой

	return 0;
}
