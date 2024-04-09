#include <iostream>
#include <functional>

using namespace std;

void print_sum(int a, int b) {
	cout << "Сумма: " << a + b << endl;
}

int main() {
	auto bound_fn = bind(print_sum, 1, 10);	// _1 Заменяем первый аргумент
	
	bound_fn(5);	// Выводит "Сумма: 15"
	bound_fn(20);	// Выводит "Сумма: 30"
	
	return 0;
}
