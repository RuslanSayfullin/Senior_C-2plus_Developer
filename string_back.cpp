#include <iostream>
#include <string>

int main() {

	std::string str = "example";

	// Получаем ссылку на последний символ
	char& last = str.back();

	// Выводим этот символ
	std::cout << last << std::endl;	// dsdtltv 'e'

	// Изменяем последний символ
	last = '!';

	// Выводим измененную строку
	std::cout << str << std::endl;	// выведет "exampl!"
}
