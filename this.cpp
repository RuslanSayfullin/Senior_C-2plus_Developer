#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w;
	height = h;
    }

    int getArea() {
        return this -> width * this -> height;
    }
};

int main() {
    Rectangle rect(3, 4);

    cout << "Площадь: " << rect.getArea();

    return 0;
}
    
