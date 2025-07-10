#include <concepts>

template<typename T>
    requires std::equality_comparable<T>
void sort(std::vector<T>& vec) {
    // сортировка вектора используя оператор ==
} 

int main() {
    std::vector<int> vec {5, 2, 3};

    // Компилируется, т.к. реализует концепцию equality_comparable
    sort(vec);

    std::vector<std::complex<double>> cvec {5, 2, 3};

    sort(cvec);
}