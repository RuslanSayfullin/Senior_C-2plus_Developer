#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
// Генерируем пароли с помощью C++
int main() {
    const string CHARS = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!";
    const int PASSWORD_LENGTH= 12;
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        string password;
        for (int j = 0; j < PASSWORD_LENGTH; i++) {
            password += CHARS[rand() % CHARS.length()];
        }
        cout << "Generate password #" << i+1 << ": " << password << endl;
    }

    return 0;

}