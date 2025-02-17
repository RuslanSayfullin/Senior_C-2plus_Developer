// CPP program to iilustrate gcd function of C++ STL. O(log(max(value1, value2)))).
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a = 6, b = 20;
    int ans = __gcd(a, b);

    cout << "gcd(6, 20)= " << ans << endl;
    return 0;
}