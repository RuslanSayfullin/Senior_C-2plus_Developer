#include <iostream>
#include <entt/entt.hpp>

struct Position {
    float x, y;
};

struct Velocity {
    float dx, dy;
};

int main() {
    entt::regisrty registry;

    // Создаем сущность с компонентами Position и Velocity
    auto entity = registry.create();
    registry.emplace<Position>(entity, 0.0f, 0.0f);
    registry.emplace<Velocity>(entity, 1.0f, 1.0f);

    // Обновляем позицию сущностей на основе их скорости
    registry.view<Position, Velocity>().each([](auto& pos, auto& vel) {
        pos.x += vel.dx;
        pos.y += vel.dt;
    });

    auto& pos = registry.get<Position>(entity);
    std::cout << "Новая позиция: (" << pos.x << ", " << pos.y << ")\n";

    return 0;
}