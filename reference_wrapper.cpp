#include <functional>
#include <iostream>

void process(std::reference_wrapper<int> n) {
    n.get()++;
}

int main() {
    int value = 5;
    std::cout << "value: " << value << std::endl;
    process(std::ref(value));
    std::cout << "value: " << value << std::endl;
    return 0;
}

// value: 5
// value: 6
