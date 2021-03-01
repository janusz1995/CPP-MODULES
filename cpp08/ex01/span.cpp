#include "span.hpp"

Span::Span(unsigned int n) {
	max_len = n;
}

Span::~Span() {}


Span::Span(const Span &span) {
	*this = span;
}

Span& Span::operator=(const Span &span) {
	if (this != &span) {
		arr = span.arr;
		max_len = span.max_len;
	}
	return (*this);
}

unsigned int Span::getMaxLen() {
	return (max_len);
}

void Span::addNumber(int n) {
	if (max_len == arr.size()) {
		throw Span::arrayIsFull();
	}
	arr.push_back(n);
}

int	Span::shortestSpan() {
	if (arr.size() < 2) {
		throw Span::arrayIsLittle();
	}
	std::vector<int> copy = arr;

	std::sort(copy.begin(), copy.end());

	std::vector<int>::iterator it_first = copy.begin();
	std::vector<int>::iterator it_second = it_first + 1;

	int minDiff = *it_second - *it_first;

	while (++it_second != copy.end()) {
		++it_first;
		if (*it_second - *it_first < minDiff) {
			minDiff = *it_second - *it_first;
		}
	}
	return (minDiff);
}

int Span::longestSpan() {
	if (arr.size() < 2) {
		throw Span::arrayIsLittle();
	}
	std::vector<int> copy = arr;

	std::sort(copy.begin(), copy.end());

	return (*(copy.end() - 1) - *copy.begin());
}

const char* Span::arrayIsFull::what() const throw() {
	return ("Array is full!");
}

const char* Span::arrayIsLittle::what() const throw() {
	return ("Array is Little!");
}

const char* Span::dontHaveSpace::what() const throw() {
	return ("Don't have space!");
}
