##### _разработка Sayfullin R.R.

# Инструкция актуальна для linuxcnc 2.8.4
Чтобы скомпилировать с помощью компилятора C++ (например, g++ или clang++), файл "check_serial_number.cpp" с программой:

1. В коде используется библиотека OpenSSL для вычисления хешей SHA-256, установите библиотеку OpenSSL:
    $ sudo apt-get install libssl-dev
2. Для компиляции кода на C++ с использованием Qt вам понадобится установить необходимые библиотеки и инструменты разработки.
Для этого вы можете выполнить следующие команды в терминале:
    $ sudo apt-get update
    $ sudo apt-get install build-essential qt5-default libssl-dev

2. Скомпилировать код с помощью компилятора C++:
    $ g++ -o check_serial_number check_serial_number.cpp -lssl -lcrypto -fPIC `pkg-config --cflags --libs Qt5Widgets`

3. Убедитесь, что у скомпилированного файла есть права на выполнение. 
Если права не установлены, вы можете установить их с помощью команды: 
    $ chmod +x check_serial_number
4. Добавить файл license.lic с действующей лицензией, в текущую директорию.
5. Запустите скомпилированный файл с помощью команды:
    $ ./check_serial_number