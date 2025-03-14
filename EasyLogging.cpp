#include <iostream>
#include <easylogging++.h>

INITIALIZE_EASYLOGGINGPP

/* EasyLogging++ — это мощная и гибкая библиотека логирования для C++, 
которая поддерживает многопоточность и настраиваемый вывод. */
int main() {
    el::Loggers::addFlag(el::LoggingFlag::ColoredTerminalOutput);

    LOG(INFO) << "Пример информационного логирования";
    LOG(WARNING) << "Пример предупреждения";
    LOG(ERROR) << "Пример ошибки";

    return 0;
}