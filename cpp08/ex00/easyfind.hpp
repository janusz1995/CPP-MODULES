#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>

class notFoundIterator : public std::exception{
	const char* what() const throw() {
		return ("Not found iterator!");
	}
};

template<typename T>
typename T::iterator easyfind(T &arr, int a) {

	typename T::iterator  ptr;

	ptr = std::find(arr.begin(), arr.end(), a);
	if (ptr != arr.end())
		return (ptr);
	else
		throw notFoundIterator();
}

#endif
