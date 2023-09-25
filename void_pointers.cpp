#include <iostream>

int main() {

	int n =5;
	double d = 1.5;

	//  Создаем void указатель
	void* p;

	// Преобразуем void* к int* и выводим значение
	std::cout << *static_cast<int*>(p) << std::endl; // 5

	// Теперь присваиваем адрес double переменной
	p = &d;

	// Преобразуем к double* и выводим значение
	std::cout << *static_cast<double*>(p) << std::endl;    // 1.5

	return 0;
}
