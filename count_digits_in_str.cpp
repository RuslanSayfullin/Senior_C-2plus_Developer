#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for (int i=0; i < str.length(); i++) {
        if (isdigit(str[i]))
            count++;
    }

    cout << "Number of digits in the string: " << count << endl;

    return 0;
}