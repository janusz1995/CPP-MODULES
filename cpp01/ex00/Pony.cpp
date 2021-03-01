#include "Pony.hpp"

Pony::Pony() {
	std::cout << "Constructor" << std::endl;
	return;
}

void	Pony::pony_run(void){
	std::cout << "Pony runing" << std::endl;
	return;
}

void	Pony::pony_eat(void){
	std::cout << "Pony eating" << std::endl;
	return;
}

Pony::~Pony(){
	std::cout << "Destructor" << std::endl;
	return;
}