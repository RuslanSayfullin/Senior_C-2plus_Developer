#include <iostream>

int main() {
	// Обьявление переменных для хранения чисел и операции
	double num1, num2, result;
	char operation;

	// Ввод первого числа
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	
	// Ввод второго числа
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	// Ввод операции
	std::cout << "Введите операцию (+, -, *, /): ";
	std::cin >> operation;

	// Выполнение операции в зависимости от введенного символа
	switch (operation) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			// Проверка деления на ноль
			if (num2 != 0) {
				result = num1 / num2;
			} else {
				std::cout << "Ошибка: деление на ноль!" << std::endl;
				return 1; // Возвращаем ненулевой код ошибки
			}
			break;
		default:
			std::cout << "Ошибка: неверная операция!" << std::endl;
			return 1;
	}

	// Вывод результата:
	std::cout << "Результат: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;
	return 0; // Возвращаем нулевой код, чтобы показать успешное выполнение программы
}

