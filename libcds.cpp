#include <iostream>
#include <cds/container/michael_list.h>

// определение типа данных для хранения в списке
struct MyData {
    int value;
};

// Определение списков Michael
cds::container::MichaelList<MyData> list;

// Добавление элементов в список
list.push_back({10});

// Получение элемента из списка
MyData data = list.front();

// Удаление элемента из списка
list.pop_front();