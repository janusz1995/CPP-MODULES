#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename Type>
void	iter(Type *array, int len_arr, void (*func)(Type& a)) {

	for (int i = 0; i < len_arr; ++i) {
		func(array[i]);
	}
}

#endif