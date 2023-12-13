#include <iostream>
#include <cstring>

extern "C" {
	extern char* program_invocation_name;
}

int main() {
	std::cout << "Program Name: " << program_invocation_name << std::endl;

	// Extracting directory and file name
	char* programName = strdup(program_invocation_name);
	char* dirName = dirName(programName);
	char* baseName = basename(program_invocation_name);

	std::cout << "Directory: " << dirName << std::endl;
	std::cout << "File Name: " << baseName << std::endl;

	// Remember to free the memory allocated by strdup
	free(programName);

	return 0;
}
