#include "Ice.hpp"

Ice::Ice():AMateria("ice"){}

Ice::Ice(Ice const &ice):AMateria(ice){}

Ice* Ice::clone() const{
	return (new class Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice& Ice::operator=(Ice const &ice){
	AMateria::operator=(ice);
	return (*this);
}

Ice::~Ice(){}