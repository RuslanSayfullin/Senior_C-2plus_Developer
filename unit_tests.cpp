#include <gtest/gtest.h>

// Включаем макросы GTest
using namespace testing;


// Включаем тестируемую функцию
#include "my_functions.h"	// Подключаем зоголовочный файл с функцией add

// Начало тестового кейса
Test(AddFunctiontest, PositiveNumbers){

// Оканчание тестового кейса
int main(int argc, char** argv) {
	::testing::InitGoogletest(&argc, argv);
	return RUN_ALL_TEST();
}
