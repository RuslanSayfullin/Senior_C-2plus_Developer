#include <iostream>
#include <cwchar>

int main() {
    const wchar_t* str = L"Hello, World";
    const wchar_t* charset = L"aeiou";

    const wchar_t* result = wcspbrk(str, charset);

    if (result != nullptr) {
        std::wcout << L"Первый гласный символ в строке: " << *result << std::endl;
    } else {
        std::cout << L"Глассные символы не найдены в строке." << std::endl;
    }

    return 0;
}