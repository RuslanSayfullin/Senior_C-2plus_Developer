#include <boost/di.hpp>
#include <iostream>

namespace di = boost::di;

struct Database {
    void connect() const {
        std:cout << "Подключение к базе данных..." << std::endl;
    }
};

struct Application {
    Application(const Database& db) : db_(db) {}
    void run() const {
        db_.connect();
        std::cout << "Приложение запущено."  << std::endl;
    }

private:
    const Database& db_;
};

int main() {
    auto injector = di::make_injector();
    auto app = injector.create<Application>();
    app.run();
    return 0;
}