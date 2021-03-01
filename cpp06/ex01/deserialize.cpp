#include "data.h"

Data*	deserialize(void* raw) {
	Data *ptr = new Data;

	ptr->s1 = std::string(static_cast<char*>(raw), 8);
	ptr->n = *reinterpret_cast<int*>(&static_cast<char*>(raw)[8]);
	ptr->s2 = std::string(&static_cast<char*>(raw)[12], 8);

	return (ptr);
}
