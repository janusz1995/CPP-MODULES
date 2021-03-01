#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array {
public:
	Array();
	Array(unsigned int counts);
	Array(Array const &array);
	Array& operator=(Array const &array);
	~Array();
	unsigned int getLenArr(void) const;
	T& operator[](int num);
	const T& operator[](int num) const;
	class exceptionArray : public std::exception{
		const char* what() const throw();
	};
private:
	T				*arr;
	unsigned int	len_arr;
};

template<typename T>
Array<T>::Array() {
	arr = new T[0];
	len_arr = 0;
}

template<typename T>
Array<T>::Array(unsigned int counts) {
	arr = new T[counts];
	len_arr = counts;
	for (int i = 0; i < counts; ++i)
		arr[i] = 0;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const &array) {
	if (*this != &array) {
		delete[] arr;
		arr = new T[array.len_arr];
		for (int i = 0; i < len_arr; ++i)
			arr[i] = array[i];
		len_arr = array.len_arr;
	}
	return (this);
}

template<typename T>
Array<T>::Array(Array const &array) {
	*this = array;
}

template<typename T>
unsigned int Array<T>::getLenArr() const {
	return (len_arr);
}

template<typename T>
T& Array<T>::operator[](int num) {

	if (len_arr == 0 || num > len_arr || num < 0)
		throw exceptionArray();
	return (arr[num]);
}

template<typename T>
const T& Array<T>::operator[](int num) const{

	if (len_arr == 0 || num > len_arr || num < 0)
		throw exceptionArray();
	return (arr[num]);
}

template<typename T>
Array<T>::~Array() {
	delete[] arr;
}

template<typename T>
const char* Array<T>::exceptionArray::what() const throw() {
	return ("Index not found!");
}

#endif
