#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::string input = "Это пример токенизации строки в C++";
    std::istringstream iss(input);
    std::string token;
    std::vector<std::string> tokens;

    while (iss >> token) {
        tokens.push_back(token);
    }

    // Теперь вектор 'tokens' содержит отдельные токены
    for (const std::string& t : tokens) {
        std::cout << t << std::endl;
    }

    return 0;
}    
