#include <iostream>
#include <vector>
#include <algorithm>

// Defining the generator function
int gen(
    static int i = 0;
    return ++i;
)

using namespace std;

int main() {
    int i1;

    // Declaring a vector of size 10
    std::vector<int> v1(10);

    // Using std::generate
    std::generate(v1.begin(), v1.end(), gen);

    vector<int>::iterator i1;
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
       std::cout << *i1 << " ";
    }

    return 0;
}