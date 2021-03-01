#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base::~Base() {}

static Base* createA() { return (new A); }

static Base* createB() { return (new B); }

static Base* createC() { return (new C); }

Base*	generate(void) {
	Base *ptr;
	Base* (*func[3])(void) = {createA, createB, createC};

	ptr = func[std::rand() % 3]();
	return (ptr);
}

void	identify_from_pointer(Base *p) {

 	if (dynamic_cast<A*>(p)) {
		std::cout << "This is Class A - pointer" << std::endl;
 	}
 	if (dynamic_cast<B*>(p)) {
		std::cout << "This is Class B - pointer" << std::endl;
 	}
 	if (dynamic_cast<C*>(p)) {
		std::cout << "This is Class C - pointer" << std::endl;
	}
}

void	identify_from_reference(Base &p) {

	if (dynamic_cast<A*>(&p)) {
		std::cout << "This is Class A - reference" << std::endl;
	}
	if (dynamic_cast<B*>(&p)) {
		std::cout << "This is Class B - reference" << std::endl;
	}
	if (dynamic_cast<C*>(&p)) {
		std::cout << "This is Class C - reference" << std::endl;
	}
}

int		main(void) {
	Base *ptr;
	std::srand(std::time(NULL));

	ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	delete ptr;
	return (0);
}