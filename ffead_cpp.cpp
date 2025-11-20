#include <iostream>
#include <ffead/ffead.h>

using namespace std;

class HelloWorld : public Application{
public:
    HelloWorld() {}

    void onStartup() override {
        // Создать маршрут для "/"
        router().get("/", [](Request& request, Response& response){
            // отправлять ответ "Hello,World!"
            response.send("Hello, Woorld!");
        });
    }
};

int main() {
    // Создать приложение HelloWorld
    HelloWorld app;

    // Запустить приложение
    app.run();

    return 0;
}