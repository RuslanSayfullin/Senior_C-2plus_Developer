//  Пример счетчика
void increment(void) {
    static insigned int counter = 0;
    counter++;
    printd("%d ", counter);
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        increment();
    }
    return 0;
}