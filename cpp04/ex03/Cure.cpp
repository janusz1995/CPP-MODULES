#include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure::Cure(Cure const &cure):AMateria(cure){}

Cure* Cure::clone() const{
	return (new class Cure(*this));
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}

Cure& Cure::operator=(Cure const &cure){
	AMateria::operator=(cure);
	return (*this);
}

Cure::~Cure(){}