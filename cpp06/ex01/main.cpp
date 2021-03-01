#include "data.h"

int		main(void) {

	void*	ptr;
	Data*	data;

	std::srand(std::time(NULL));

	ptr = static_cast<void*>(serialize());
	data = deserialize(ptr);

	std::cout << "Original s1 after deserialize: \"" << data->s1 << "\" - size s1: " << data->s1.length() << std::endl;
	std::cout << "Original number after deserialize: " << data->n << std::endl;
	std::cout << "Original s2 after deserialize: \"" << data->s2 << "\" - size s2: " << data->s2.length() << std::endl;
	std::cout << "Original bytes ----> " << sizeof(data->s1) << " + " << sizeof(data->n) << " + " << sizeof(data->s2) << " = " << (sizeof(data->s1) + sizeof(data->n) + sizeof(data->s2)) << std::endl;

	delete static_cast<char*>(ptr);
	delete data;

	return (0);
}