#include <iostream>

#pragma once

#pragma message("This is a custom message")

#pragma warning(disable: 4996)    // Отключпем предупреждение о deprecated функции

#pragma pack(push, 1)
struck MyStruct {
    int x;
    char y;
};
#pragma pack(pop)

int main() {
    #pragma omp parallel for
    for (int i = 0; i < 4; ++=) {
        std::cout << "Thread " << i << " is running." << std::endl;
    }

    #pragma omp barrier     // Ждем завершения всех потоков

    #pragma omp single
    std:cout << "All threads have finished." << std::endl;

    return 0;
}
