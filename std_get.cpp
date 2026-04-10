#include <iostream>
#include <tuple>

int main() {

    std::tuple<int, double, char> myTuple(10, 3.14, 'a');

    // Получаем втрой элемент кортежа
    double x = std::get<1>(myTuple);

    // Выводим его на экран
    std::cout << "Второй элемент кртежа: " << x << std::endl;

    return 0;
}