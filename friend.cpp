#include <iostream>

class Box {
private:
    int width, height, depth;

public:
    Box(int w, int h, int d) : width(w), height(h), depth(d) {}

    // ОбЪявляем функцию дружественную для класса Box
    friend void printVolume(const Box& box);
};

// Функция имеет доступ к закрытым членам класса Box
void printVolume(const Box& box) {
    int volume = box.width * box.height * box.depth;
    std::cout << "Объем коробки: " << volume << std::endl;
}

int main() {
    Box box(3, 4, 5);
    printVolume(box); 

    return 0;
}