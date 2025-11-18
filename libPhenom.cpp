#include <phenom/event_loop.h>

// Функция обратного вызова для обработки события
void on_event(ph_event_t* event) {
    // Обработать событие
}

int main() {
    // Создать экземпляр класса ph_event_loop
    ph_event_loop_t* event_loop = ph_event_loop_create();

    // Зарегистрировать функцию обратного вызова
    ph_event_loop_add_listener(event_loop, "my_event", on_event);

    // Опубликовать событие
    ph_event_t* event = ph_event_create("my_event", NULL);
    ph_event_publish(event_loop, event);

    // Запустить цикл обработки событий
    ph_event_loop_run(event_loop);

    // Освободить ресурсы
    ph_event_loop_destroy(event_loop);

    return 0;
}