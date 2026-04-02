#include <iostream>

int main() {
    int n = 5;
    double d = 1.5;

    // Создаем void указатель
    void* p;

    // Присваем адрес int переменной
    p = &n;

    // Преобразуем void* к int* и выводит значение
    std::cout << *static_cast<int*>(p) << std::endl;

    // Теперь присваиваем адрес double переменной
    p = &d;

    // Преобразуем к double* и выводим значение
    std::cout << *static_cast<double*>(p) << std::endl;

    return 0;
}