#include <iostream> // подключаем библиотеку ввода и вывода
#include <ctime>

using namespace std;
// Найти среднее арифметическое в трех рядах.
int main() {
    setlocale(LC_ALL, "Russian");   // включаем русский язык
    srand(time(0)); // инициализация генератора случаных чиселб подобие randomise

    double average, summa, number;

    for (int i = 1; i <= 3; i++) {
        number = rand() % 10;
        summa = summa + number;
        cout << number << " | ";
    }

    average = summa / 5;
    cout << "Среднее арифмет = " << average << endl;


    return 0;
}