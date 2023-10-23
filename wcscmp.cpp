#include <iostream>
#include <cwchar>

int main() {
	const wchar_t* str1 = L"Привет";
	const wchar_t* str2 = L"Мир";

	int result = wcscmp(str1, str2);

	if (result < 0) {
		std::wcout << L"Первая строка меньше второй." << std::endl;
	} else if (result > 0) {
		std::wcout << L"Первая строка больше второй." << std::endl;
	} else {
		std::wcout << L"Строки равны." << std::endl;
	}
	return 0;
}
