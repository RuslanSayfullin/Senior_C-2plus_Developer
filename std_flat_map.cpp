#include <iostream>
#include <flat_map>

int main() {
    std::flat_map<int, std::string> flatMap = {{1, "one"}, {2, "two"}, {3, "three"}};

    flatMap[4] = "four";

    for (const auto& [key, value] : flatMap) {
        std::cout << key << ": " << value << std::endl;
    }

    return 0;
}