#include <iostream>
#include <cstring>

int main() {
	char buffer[5];	// Создаем буфер размером 5 байт
	
	// Копируем строку "Hello, World!" в буфер без проверки длины строки
	strcpy(buffer, "Hello, World!");

	// Выводим содержимое буфера
	std::cout << buffer << std::endl;

	return 0;
}
