#include <iostream>
#include <algorithm>

int main() {
    double input = 1.3;
    double min = 0;
    double max = 1;

    double result = std::clamp(input, min, max);

    std::cout << "Input: " << input << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Result: " << result << std::endl;

    return 0;
}