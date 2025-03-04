#include <iostream>
#include <string>


// string.back - функция возвращает ссылку на последний символ строки. 
int main() {
    std::string str = "example";

    // Получаем ссылку на последний символ
    char& last = str.back();

    // Выводим этот символ
    std::cout << last << std::endl; // выведет 'e'

    // Изменяем последний символ
    last = '!';

    // Выводим измененную строку 
    std::cout << str << std::endl;  // exampl!

    return 0;
}