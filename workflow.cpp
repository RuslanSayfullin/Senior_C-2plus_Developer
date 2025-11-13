#include <iostream>
#include <boost/hana/tuple.hpp>
#include <boost/hana/for_each.hpp>
#include <boost/hana/transform.hpp>

using namespace boost::hana;

int main() {
    // Определяем интерфейс модуля
    struct Module {
        virtual void print() = 0;
    };

    // Создаем два модуля
    struct Module1 : public Module {
        void print() override {
            std::cout << "Module1 " << std::endl;
        }
    };

    struct Module2 : public Module {
        void print() override {
            std::cout << "Module2" << std::endl;
        }
    };

    // Создаем вектор модулей
    auto modules = tuple(make<Module1>(), make<Module2>());

    // Перебираем все модули и вызывает метод print()
    for_each(modules, [](auto& module) {
        module.print();
    });

    return 0;
}