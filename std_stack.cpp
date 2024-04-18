#include <iostream>
#include <stack>

int main() {
	std::stack<int> s;

	// Добавление элементов в стек
	s.push(1);
	s.push(2);
	s.push(3);

	// Проверка, пуст ли стек
	if (!s.empty()) {
		// Извлечение элементов из стека
		while (!s.empty()) {
			std::cout << s.top() << " ";
			s.pop();
		}
	}

	return 0;

}
