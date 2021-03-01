#include "Peon.hpp"

Peon::Peon(std::string newName):Victim(newName){
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(Peon const &peon):Victim(peon){
	name = peon.name;
	std::cout << "Peon Copy Constructor called" << std::endl;
}

void	Peon::getPolymorphed() const{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}

Peon& Peon::operator=(Peon const &peon){
	std::cout << "Peon Operator equal called" << std::endl;
	if (&peon != this)
		name = peon.name;
	return (*this);
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}
