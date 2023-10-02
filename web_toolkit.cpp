#include <Wt/WApplication>
#include <Wt/WContainerWidget>
#include <Wt/WText>

class HelloWorldApplication : public Wt::WApplication {
public:
    HelloWorldApplication(const Wt::WEnvironment& env)
        : Wt::WApplication(env) {
	// Создаем главный контейнер для размещения элементов на веб-странице
	auto container = root();

	// Добавляем виджет текста в контейнер
	auto text = std::make_unique<Wt::WText>("Привет, мир!");

	// Добавляем текстовый виджет в контейнер
	container->addWidget(std::move(text));
    }
};

int main(int argc, char** argv) {
	// Создаем экземпляр Wt::WRun c yfibv ghbkj;tybtv
	return Wt::WRun(argc, argv, [](const Wt::WEnvironment& env) {
	    return std::make_unique<HelloWourldApplication>(env);
	});
}
