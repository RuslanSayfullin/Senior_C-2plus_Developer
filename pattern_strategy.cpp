#include <iostream>

// Стратегия 1 - пузырьковая сортировка
class BubleSortStrategy {
public:
    void sort(int arr[], int n) {
        // Реализация алгоритма пуузырьковой сортировки
        std::cout << "Сортировка пузырьком" << std::endl;

        // вывод отсортированного массива
        for(int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

// Стратегия 2 - сортировка вставками
class InsertSortStrategy {
public:
    void sort(int arr[], int n) {
        // реализация алгоритма сортировки вставками
        std::cout << "Сортировка вставками" << std::endl;

        // вывод отсортированного массива
        for(int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

// Контекст
class Sorted {
private:
    SortingStrategy* strategy;

public:
    // конструктор с параметром - кнкретная стратегия
    Sorted(SortingStrategy* strategy) {
        this->strategy = strategy;
    }

    void sort(int arr[], int n) {
        strategy->sort(arr, n); // вызов сортировки
    }
};

// Клиентский код
int main() {
    int arr[] = {2, 5, 6, 3, 1};

    Sorted sorter = Sorted(new BubleSortStrategy());
    sorter.sort(arr, 5);

    Sorted sorter2 = Sorted(new InsertSortStrategy());
    sorter2.sort(arr, 5);

    return 0;
}