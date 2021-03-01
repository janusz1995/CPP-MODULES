#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Create Brain" << std::endl;
	return;
}

std::string	Brain::identify(void) const{

	std::stringstream ss;

	ss << "0x" << std::uppercase << std::hex << (const unsigned long int)this;
	return (ss.str());
}

Brain::~Brain(){
	std::cout << "Delete Brain" << std::endl;
	return;
}