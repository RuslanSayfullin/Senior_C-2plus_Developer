#include <iostream>
#include <gls/gls_poly.h>

int main() {
    // Коэффициенты квадратного уравнения
    double a = 1.0, b = -3.0, c = 2.0;
    double roots[2];

    // Нахождение корней
    int result = gsl_poly_solve_quadratic(a, b, c, &roots[0], &roots[1]);

    if (result == 2) {
        std::cout << "Корни уравнения: " << roots[0] << " и " << roots[1] << std::endl;
    } else if (result == 1) {
        std::cout << "Единственный корень: " << roots[0] << std::endl;
    } else {
        syd::cout << "Корней нет." << std::endl;
    }
    return 0;
}