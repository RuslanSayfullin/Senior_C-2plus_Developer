#include <iostream> // подключаем библиотеку ввода и вывода
#include <ctime>
using namespace std ; // используем именное пространство std

int main()
{
    setlocale(LC_ALL, "Russian"); // включаем русский язык
    srand(time(0));		// инициализация генератора случайных чиселб подомие randomize

    double average, summa, number;

    for (int i = 1; i <= 3; i++) {
        summa = 0;

	for (int j = 1; j <= 5; j++) {
	    number = rand() % 10;
	    summa = summa + number;
	    cout << number << " | ";
        }

	average = summa / 5;
	cout << "Среднее арифмет. = " << average << endl;
    }
	system("PAUSE"); // чтобы программа не закрывалась
	return 0; 	// возвращаем функции main() ноль
}
