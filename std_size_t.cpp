#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> v = {1, 2, 3, 4};

    std::size_t size = v.size();    // size= 4

    std::cout << "Размер вектора: " << size << '\n';

    int arr[100];
    std::size_t length = sizeof(arr) / sizeof(arr[0]);    // lenght = 100

    std::cout << "Размер массива: " << length << '\n';
}

// Здесь size_t используется для получения размера вектора и массива.
// Это гарантирует отсутсвие переполнения, в отличие от int.
