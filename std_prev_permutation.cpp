#include <algorithm>
#include <string>
#include <iostream>
#include <functional>

int main() {
    std::string s = "abc";
    std::sort(s.begin(), s.end(), std::greater<char>());
    do {
        std::cout << s << ' ';
    } while(std::prev_permutation(s.begin(), s.end()));
    std::cout << '\n';

    return 0;
}