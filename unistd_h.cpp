#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t child_pid = fork();	// Создаем новый процесс

	if (child_pid == -1) {
		std::cerr << "Ошибка при вызове fork()" << std::endl;
		return 1;
	} else if (child_pid == 0) {
		// Этот код выполняется в дочернем процессе
		std::cout << "Это дочерний процесс. PID: " << getpid() << std::endl;
		execl("/bin /ls", "ls", "-l", nullptr);	// Заменяем текущий процесс программой ls
	} else {
		// Этот код выполняется в родительском процессе
		std::cout << "Это родительский процесс. PID: " << getpid() << std::endl;
		wait(nullptr);	// Ждем завершения родительского процесса
		std::cout << "Дочерний процесс завершился." << std::endl;
	}

	return 0;
}
