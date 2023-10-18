#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "Hello, world!";
	cout << str.length() << endl;	// 13

	str.append(" How are you?");
	cout << str << endl;		// Hello, world! How are you?

	string sub = str.substr(7, 5);
	cout << sub << endl;		// world

	int index = str.find("world");
	cout << index << endl;		// 7

	str.replace(7, 5, "everyone");
	cout << str << endl;		// Hello, everyone! How are you?
	return 0;
}
