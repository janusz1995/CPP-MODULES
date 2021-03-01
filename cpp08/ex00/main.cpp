#include "easyfind.hpp"

void	print_arr(std::vector<int>::iterator& ptr, std::vector<int>& arr) {
	std::cout << "Start printing ---->>";
	while (ptr != arr.end()) {
		std::cout << " | " << *ptr;
		++ptr;
	}
	std::cout << " | <<---- End printing..." << std::endl;
}

int		main(void) {

	std::vector<int> arr(10);
	std::vector<int>::iterator ptr;

	for (int i = 0; i < 10; ++i)
		arr[i] = i + 1;

	try {
		ptr = easyfind(arr, 6);

		std::cout << "Find ptr = " << *ptr << std::endl;
		print_arr(ptr, arr);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		ptr = easyfind(arr, 11);

		std::cout << "Find ptr = " << *ptr << std::endl;
		print_arr(ptr, arr);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}


	return (0);
}