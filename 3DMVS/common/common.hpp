// Этот код представляет собой заголовочный файл, который содержит определения, макросы и функции, полезные для работы с изображениями и логированием.

// Эти директивы используются для защиты от многократного включения файла. Если файл уже был включен, следующий код не будет повторно включен.
#ifndef SAMPLE_COMMON_COMMON_HPP_
#define SAMPLE_COMMON_COMMON_HPP_

// Эти директивы подключают стандартные библиотеки C.
// Стандартная библиотека ввода-вывода на C.
#include <stdio.h>
// Стандартная библиотека, содержащая функции для выполнения операций общего назначения.  
#include <stdlib.h>
// Библиотека для работы со строками в C.
#include <string.h>
// Заголовочный файл стандартной библиотеки C++, который определяет класс std::string для работы со строками, обеспечивая более удобный и безопасный способ работы с текстом по сравнению с C-строками.
#include <string>
// Заголовочный файл стандартной библиотеки C++, который предоставляет шаблонный класс std::vector, представляющий динамический массив. 
// Он позволяет хранить и управлять коллекцией элементов с возможностью автоматического изменения размера.
#include <vector>
// Заголовочный файл, который предоставляет классы для работы с файловым вводом и выводом. 
#include <fstream>
// Заголовочный файл, который определяет компоненты для работы с итераторами, позволяя использовать алгоритмы STL с пользовательскими контейнерами и упрощая работу с последовательностями.
#include <iterator>
// Заголовочный файл, специфичный для DOS и Windows, который предоставляет функции для управления консолью, такие как getch (для чтения символа без ожидания нажатия Enter) и функции для управления курсором и цветом текста.
// #include <conio.h>
// Заголовочный файл, который предоставляет функции для работы с процессами, такие как _exit, _spawn, _exec и другие, позволяя создавать и управлять процессами в среде Windows.
// #include <process.h>
// Содержит функции для работы с процессами и системным вызовами, такими как fork, exec, getpid, getppid и другие.
#include <unistd.h>

// Подключение пользовательских заголовочных файлов, связанных с API, определениями и обработкой изображений, которые, относятся к библиотеке для работы с 3D-изображениями.
#include "Mv3dLpApi.h"
#include "Mv3dLpDefine.h"
#include "Mv3dLpImgProc.h"


// Определяет перечисление Mv3dLpImageMode, которое содержит различные типы режимов обработки изображений, такие как оригинальное изображение, облако точек и диапазонное изображение.
typedef enum Mv3dLpImageMode
{
	ImageMode_Origin_Image                    =   1,
	ImageMode_PointCloud_Image                =   4,
	ImageMode_Range_Image                     =   7,
}Mv3dLpImageMode;

// #ifndef ASSERT: Проверяет, не определен ли уже макрос ASSERT.
// #define ASSERT(x): Определяет макрос ASSERT, который проверяет условие x. 
// Если условие ложно, выводится сообщение об ошибке с указанием файла и строки, затем программа приостанавливается и завершает выполнение.
#ifndef ASSERT
#define ASSERT(x)   do{ \
                if(!(x)) { \
                    LOGE("Assert failed at %s:%d", __FILE__, __LINE__); \
                    LOGE("Source Code: " #x ); \
                    system("pause"); \
                    exit(0); \
                                } \
                        }while(0)
#endif

// #ifndef ASSERT_OK: Проверяет, не определен ли уже макрос ASSERT_OK.
// #define ASSERT_OK(x): Определяет макрос, который выполняет вызов функции x и проверяет, возвращает ли она код ошибки. 
// Если код не соответствует MV3D_LP_OK, выводится сообщение об ошибке.
#ifndef ASSERT_OK
#define ASSERT_OK(x)    do{ \
                int err = (x); \
                if(err != MV3D_LP_OK) { \
                LOGE("Assert failed: error %#x at %s:%d", err, __FILE__, __LINE__); \
                    LOGE("Source Code: " #x ); \
                    system("pause"); \
                    exit(0); \
                                } \
                        }while(0)
#endif


#ifdef _WIN32   // Проверяет, компилируется ли код в среде Windows.
// Включает заголовочные файлы Windows и для работы с временем.
# include <windows.h>
# include <time.h>
// Определяет функцию, которая возвращает текущую локальную дату и время в виде строки.
static inline char* getLocalTime()
{
    static char local[26] = { 0 };
    SYSTEMTIME wtm;
    struct tm tm;
    GetLocalTime(&wtm);     // Заполняет структуру wtm текущим временем.
    tm.tm_year = wtm.wYear - 1900;
    tm.tm_mon = wtm.wMonth - 1;
    tm.tm_mday = wtm.wDay;
    tm.tm_hour = wtm.wHour;
    tm.tm_min = wtm.wMinute;
    tm.tm_sec = wtm.wSecond;
    tm.tm_isdst = -1;

    strftime(local, 26, "%Y-%m-%d %H:%M:%S", &tm);      // Форматирует время в строку.

    return local;
}
//  Если код не компилируется в Windows, включаются заголовочные файлы для работы с временем и стандартными функциями POSIX.
#else
# include <sys/time.h>
# include <unistd.h>
// Определяет функцию для получения текущего времени. Использует функции POSIX для получения времени.
static inline char* getLocalTime()
{
    static char local[26] = { 0 };
    time_t time;

    struct timeval tv;
    gettimeofday(&tv, NULL);

    time = tv.tv_sec;
    struct tm* p_time = localtime(&time);
    strftime(local, 26, "%Y-%m-%d %H:%M:%S", p_time);

    return local;
}
#endif
// Определяет макрос для логирования сообщений.
#define LOG(fmt,...)   printf(fmt "\n", ##__VA_ARGS__)
// Определяют макросы для отладочного и ошибочного логирования с добавлением текущего времени.
#define LOGD(fmt,...)  printf("(%s) " fmt "\n", getLocalTime(), ##__VA_ARGS__)
#define LOGE(fmt,...)  printf("(%s) Error: " fmt "\n", getLocalTime(), ##__VA_ARGS__)


#endif