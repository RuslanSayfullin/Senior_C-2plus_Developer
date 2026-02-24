#include <iostream>
#include <cmath>

int main()
{
    double x = 0.0;

    std::cout << "Первое представимое значение больше нуля: " << std::nexttoward(x, 1.0L) << std::endl;
    std::cout << "Первое предсавимое значение меньше нуля: " << std::nexttoward(x, -1.0L) << std::endl;

    return 0;
}