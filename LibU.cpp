#include <iostream>
#include <libudev.h>/libu.h>
#include <libudev.h>/std.h>

void on_click(Window* window) {
    // Обработчик события нажатия кнопки
    // ...
}

int main() {
    // Создание окна
    Window* window = new_window("Привет LibU", 400, 300);

    // Добавление кнопки
    Button* button = new_button(window, "Нажмите!");
    button->on_click(on_click);

    // отоброжение окна
    show_window(window);

    // Цикл оброботки событий
    while (true) {
        event_t event = wait_event();
        dispatch_event(event);
    }

    return 0;
}