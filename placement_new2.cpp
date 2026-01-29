#include <iostream>

struct A {
    A(){ std::cout << "I'm constructor\n"; }
    ~A(){ std::cout << "I'm destructor\n"; }
};

int main() {
    void *pv = malloc(sizeof(A)); 
    A *pa = new(pv) A;
    std::cout << std::hex << reinterpret_cast<A*>(pv) << " = " << pa << '\n';
    pa->~A();
    free(pv);
    pv = nullptr;
}