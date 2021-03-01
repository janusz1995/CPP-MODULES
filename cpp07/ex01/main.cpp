#include "iter.hpp"

void	plus_one(int &sym) {
	sym += 1;
}

void	print_arr(std::string message, int *arr) {
	std::cout << message << " ";
	for (int i = 0; i < 5; ++i) {
		std::cout << arr[i] << " | ";
	}
	std::cout << std::endl;
}

int		main(void) {

	int arr_int[5] = {1, 3, 5, 7, 9};

	print_arr("Original ---->>", arr_int);

	iter(arr_int, 5, plus_one);
	print_arr("After function Iter ---->>", arr_int);
	return (0);
}