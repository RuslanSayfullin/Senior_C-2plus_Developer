#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long double check(long double x) {
    return pow(x, 2) + sqrt(x);
}

long double binSearch(double c) {
    double R = le10, L =0, V;
    while(fabs(R - L) > le-10) {
        M = (L + R) / 2;
        if(check(M) - c < 0) {
            L = M;
        } else {
            R = M;
        }
    }
    return R;
}

int main() {
    double c;
    cin >> c;
    double result = bin Search(c);
    cout << fixed << setprecision(6) << result;
    return 0;
}