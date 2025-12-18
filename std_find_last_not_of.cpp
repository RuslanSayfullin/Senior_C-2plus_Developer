#include <iostream>
#include <string>
#include <cstddef>

int main() {
    std::string str ("Please, erase trailing white-spaces \n");
    std::string whitespaces (" \t\f\v\n\r");

    std::size_t found = str.find_last_not_of(whitespaces);
    if (found != std::string::npos)
        str.erase(found+1);
    else
        str.clear();

    std::cout << '[' << str << "]\n";

    return 0;
}