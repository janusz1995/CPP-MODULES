#include "data.h"

void*	serialize(void) {

	char *raw = new char[20];
	int number = rand() % 100;
	char *ptr = reinterpret_cast<char*>(&number);

	for (int i = 0; i < 20; ++i) {
		raw[i] = random_symbol();
		if (i == 8) {
			for (int j = 0; j < 4; ++j, ++i) {
				raw[i] = ptr[j];
			}
			--i;
		}
	}

//	std::cout << "Original s1 ----> " << std::string(raw, 8) << std::endl;
//	std::cout  << "Original number ----> " << number << std::endl;
//	std::cout << "Original s2 ----> " << std::string(&raw[12], 8) << std::endl;

	return (raw);
}
