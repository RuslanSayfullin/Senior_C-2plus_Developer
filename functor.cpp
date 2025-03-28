#include <iostream>

// Пример функтора, который умножает число на заданный множитель
class Multiplier {
public:
    Multiplier(int factor) : factor_(factor) {}

    int operator()(int value) {
        return value * factor_;
    }
private:
    int factor_;
};

int main() {
    Multiplier multiplyBy2(2);

    int result = multiplyBy2(5);    // Вызов функтора
    std::cout << "Результат: " << result << std::endl;  // Вывод: Результат: 10

    return 0;
}
