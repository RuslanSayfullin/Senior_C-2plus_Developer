#include <tuple>
#include <iostream>

std::tuple<int, float, std::string> getTuple() {
    return {10, 3.14f, "hello"};
}

int main() {
    auto t = getTuple();
    std::cout << "Second element: " << std::get<1>(t) << "\n";
    return 0;
}

// Second element: 3.14
