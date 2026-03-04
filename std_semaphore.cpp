#include <iostream>
#include <semaphore.h>

int main() {
    //  Создаем семафор с начальным значением
    std::semaphore semaphore(1);

    // Создаем два потока
    std::thread thread1([&]() {
        // Поток 1 получил доступ к ресурсу
        semaohore.acquire();

        // ...

        // Поток 1 освобождает ресурс
        semaphore.release();
    });

    std::thread thread2([&]() {
        // Поток 2 получает доступ к ресурсу
        semaphore.acquire();

        // ...

        // Поток 2 освобождает ресурс
        semaphore.release();
    });

    // Ждем завершения потоков
    thread1.join();
    thread2.join();

    return 0;
}