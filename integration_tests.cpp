#include <gtest/gtest.h>

// Обьявление функций или классов, которые вы хотите протестировать
Test(IntegrationTest, TestName) {
	// Начальная настройка, создание обьектов и.т.д.
	// Выполнение интеграционного сценария
	// Проверка результата
	ASSERT_TRUE(true);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv):
		return RUN_ALL_TESTS();
}
