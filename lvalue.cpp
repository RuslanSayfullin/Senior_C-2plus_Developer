#include <iostream>

using namespace std;

struct Person {
    char* Name;
    short Age;
};

int main() {
    // Объявление обьекта Person
    Person myFriend;

    // Объявление ссылки на объект
    Person& rFriend = myFriend;

    myFriend.Name = "Bill";
    rFriend.Age = 40;

    cout << rFriend.Name << " is " << myFriend.Age << endl;
}