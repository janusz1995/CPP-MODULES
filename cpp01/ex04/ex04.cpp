#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *pointer;
	std::string &address = str;
	pointer = &str;

	std::cout << address << " - ADDRESS" << std::endl;
	std::cout << *pointer << " - POINTER" << std::endl;
	return  (0);
}
