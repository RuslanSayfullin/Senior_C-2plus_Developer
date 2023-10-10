#include <iostream>
#include <string>

using namespace std;

int main()
{
        // Инициализация строки
        string str = "we love C++ a lot";

        // Вывод начальной строки на экран
        cout << "Начальная строка: ";
        cout << str << endl;

        // Изменение размера строки с помощью resize()
        str.resize((7);

        // Вывод строки на экран
        cout << "ССтрока после операции resiz: ";
        cout << str << endl;

        // отоброжение емкости памяти для строки 
        cout << "Емкость памяти строки: ";
        cout << str.capacity() << endl;

        // Вывод длины строки
        cout << "Длина строки: " << str.length() << endl;

        // Уменьшение ёмкости памяти
        // с помощью shrink_to_fit()
        str.shrink_to_fit();

        // Вывод
        cout << "Новая ёмкость после shrink_ti_fit: ";
        cout << str.capacity() << endl;

        return 0;
}
