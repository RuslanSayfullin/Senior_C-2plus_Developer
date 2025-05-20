#include <iostream>

class Deep {
private:
    int* data;
public:
    void setDataValue(int d) { *data = d; }
    int getDataValue() { return *data; }

    // Конструктор
    Deep(int d);
    // Копирующий конструктор
    Deep(const Deep &source);
    // Деструктор
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source) : Deep(*source.data) {
    std::cout << "Copy constructor - deep copy" << std::endl;
}

Deep::~Deep() {
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void displayDeep(Deep s) {
    std::cout << s.getDataValue() << std::endl;
}

int main() {
    Deep obj1 {100};
    displayDeep(obj1);

    Deep obj2 {obj1};
    obj2.setDataValue(1000);
    displayDeep(obj2);

    return 0;
}