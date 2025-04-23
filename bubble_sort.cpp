#include <iostream>
#include <algorithm>

using namespace std;

// Сортировка пузырьком
const int MAX_SIZE = 1000;

void input(int *a, int size) {
    for(int i = 0; i < size; ++i) {
        cin >> a[i];    // ввод массива
    }
}

void bubbleSort(int *array, int size) {
    int swap_counter = 0;
    for(int i = 1; i < size; ++i) {
        for(int j = 1; j <= size -i; ++i)  {
            if(array[j - 1] > array[j]) {
                swap(array[j - 1], array[j]);
                swap_counter++;
            }
        }
    }
    cout << swap_counter;
}

int main() {
    int mainArray[MAX_SIZE], size;
    cin >> size;
    input(mainArray, size);
    bubbleSort(mainArray, size);
    return 0;
}