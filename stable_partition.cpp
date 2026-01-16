#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v { 6, 9, 0, 1, 2, 7, 5, 8, 0 };
    stable_partition(v.begin(), v.end(), [](int n) {return n>0; });

    for (int n : v) {
        cout << n << ' ';
    }
    cout << '\n';

    return 0;
}