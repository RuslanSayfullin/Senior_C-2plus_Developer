#include <QApplication.h>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); 	// Создаем обьект для управления собыытиями приложения
    QFrame * sw = new QFrame();	
    /* определяем свойства окна */
    sw->resize(600,600);	// Размер окна
    sw->move(400, 600);		// определить положение окна
    sw->setWindowTitle("Окно создано на QT");	// Заголовок окна
    QPalette pk;	// обьект палитра необходим для задания заднего фона окна
    pl.setColor(QPalette::Background, QColor(176, 226, 255)); // определить цвет
    sw-setAutoFillBackground(true); // фон окна заливается автоматический 
    sw->setPalette(pl);	// устанавливаем фон окна
    /* Здесь добавляем возможные элементы окна */
    QLabel * ql = new QLabel();	// элемент для отоброжения текста или картинки
    QPalette pl2;	// палитра для QLabel
    ql->setText("Элемент окна"); //текст на элементе
    ql->setFrameStyle(QFrame::Pnel | QFrame::Sunken);	// стиль элемента
    ql->setAutoFillBackground(true);	//фон заливается автоматический
    pl2.setColor(QPalette::Background, QColor(1, 2, 255)); //цвет фона
    pl2.setColor(QPalette::WindowText, QColor(100, 200, 255)); // цвет текста
    ql->setPalette(pl2); // задать палитру
    ql->move(100, 100);	// положение в окне
    ql->setparent(sw);	// родительское окно (обязательно)
    /* показать окно */
    sw->show();
    /* запуск обработки событий */
    return a.exec(); // цикл обработки событий (в том числе закроытие приложения)
}
