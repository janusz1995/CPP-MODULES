#include "Array.hpp"

int		main(void) {

	int num = 0;
	Array<int> intArr(10);
	Array<double> doubleArr(10);
	Array<double> doubleArr1(0);

	for (int i = 0; i < 10; ++i) {
		num += 1;
		intArr[i] += num;
		doubleArr[i] = intArr[i] + 0.5;
	}
	std::cout << "Int Array --->>  " << "| ";
	for (int i = 0; i < intArr.getLenArr(); ++i) {
		std::cout << intArr[i] << " | ";
	}
	std::cout << std::endl << "Double Array --->>  " << "| ";
	for (int i = 0; i < doubleArr.getLenArr(); ++i) {
		std::cout << doubleArr[i] << " | ";
	}
	std::cout << std::endl;

	try {
		std::cout << doubleArr[11] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << doubleArr1[0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}