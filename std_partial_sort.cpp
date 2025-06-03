#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 }, t;

    vector<int>::iterator ip;

    // Using std::partial_sort
    std::partial_sort(v.begin(), v.begin() + 3, v.end());

    // Displaying the vector after applying
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }

    return 0;
}