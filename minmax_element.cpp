#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    const auto v = {3, 9, 1, 4, 2, 5, 9};
    const auto [min, max] = minmax_element(begin(v), end(v));

    cout << "min: " << *min << ", max: " << *max << '\n';

    return 0;
}