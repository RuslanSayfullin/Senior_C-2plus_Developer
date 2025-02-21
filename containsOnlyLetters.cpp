#include <iostream>
#include <string>
#include <regex>

bool containsOnlyLetters(std::string const &str) {
    return std::regex_match(str, std::regex("^[A-Za-z]+$"));
}

int main() {
    std::string str = "String";

    std::cout << std::boolalpha << containsOnlyLetters(str) << std::endl; 

    return 0;  
}

