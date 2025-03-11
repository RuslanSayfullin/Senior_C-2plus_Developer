#include <iostream>
#include <functional>

/* 
В C++ функция std::bind из заголовка <functional> позволяет создавать обёртки для функций, связывая определённые аргументы. 
Это удобно для частичного применения аргументов.
*/

void printValues(int a, int b, int c) {
    std::cout << "a: " << a << " , b: " << b << " , c: " << std::endl;
}

int main() {
    // Связывает первый и второй аргументы
    auto bindFunc = std::bind(printValues, 1, 2, std::placeholders::_1);

    // Передаём третий аргумент
    bindFunc(3);
    // Вывод: a: 1, b: 2, c: 3

    // Создаём другую обертку с другим рорядком аргументов
    auto reverseBind = std::bind(printValues, std::placeholders::_2, std::placeholders::_1, 0);
    reverseBind(5, 6);

    return 0;
}