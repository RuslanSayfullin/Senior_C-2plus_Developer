#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// function to calculate printable characters
void space(string& str) {
    int count = 0; 
    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (isprint(c))
            count++;
    }
    cout << count;
}

// Driver Code
int main() {
    string str = "My name \n is \n Ruslan";
    space(str);
    return 0;
}