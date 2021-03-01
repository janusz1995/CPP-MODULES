#include "span.hpp"
//#include "span.cpp"

//void	print_arr(std::vector<int>::iterator& ptr, std::vector<int>& arr) {
//	std::cout << "Start printing ---->>";
//	while (ptr != arr.end()) {
//		std::cout << " | " << *ptr;
//		++ptr;
//	}
//	std::cout << " | <<---- End printing..." << std::endl;
//}

int		main(void) {
	std::cout << "---------- Standart Tests ----------" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "---------- My Tests ----------" << std::endl;
	Span span(5);

	span.addNumber(7);
	span.addNumber(10);
	span.addNumber(20);
	span.addNumber(100);

	Span span1(span);

	try {
		span.addNumber(22);
		span.addNumber(30);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Original Span Longest ---->> " << span.longestSpan() << std::endl;
		std::cout << "Original Span Size ---->> " << span.getMaxLen() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Copy Span Longest ---->> " << span1.longestSpan() << std::endl;
		std::cout << "Copy Span Size ---->> " << span1.getMaxLen() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span span2(3);
		std::cout << span2.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Original Span Shortest ---->> " << span.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Copy Span Shortest ---->> " << span.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------- Span Big --------------" << std::endl;
	Span spanBig(10000);
	unsigned int number = 0;
	for (int i = 0; i < 10000; ++i)
	{
		spanBig.addNumber(number);
		number += 1;
	}
	try {
		std::cout << "Span Big Shortest ---->> " << spanBig.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Span Big Longest ---->> " << spanBig.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------- Span List --------------" << std::endl;
	Span spanList(5);
	std::list<int> lst;
	for (int i = 0, num = 2; i < 6; ++i, num += 2)
	{
		lst.push_back(num);
	}

	try {
		spanList.addNumber(lst.begin(), lst.end());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		spanList.addNumber(++(lst.begin()), lst.end());
		std::cout << "Span List Longest ---->> " << spanList.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Span Big Shortest ---->> " << spanList.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}