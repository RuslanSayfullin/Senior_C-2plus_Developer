#include <iostream>

using namespace std;

union A {
    int a;
    unsigned int b;
    A() { a = 10; }
    unsigned int getb() {return b;}
};

int main() {
    A obj;
    cout << obj.getb() << endl;
    return 0;
}