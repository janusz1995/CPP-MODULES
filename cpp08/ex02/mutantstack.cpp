#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &mutantStack) : std::stack<T>(mutantStack) {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &mutantStack) {
	if (this != &mutantStack)
		this->c = mutantStack.c;
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::reverseBegin() {
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::reverseBegin() const{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::reverseEnd(void) {
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::reverseEnd(void) const{
	return (this->c.rend());
}
