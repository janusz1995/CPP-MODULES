#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const &newType):xp(0), type(newType){}

AMateria::AMateria(AMateria const &materia){
	xp = materia.xp;
	type = materia.type;
}

std::string const &AMateria::getType() const{
	return (type);
}

unsigned int AMateria::getXP() const{
	return (xp);
}

void AMateria::use(ICharacter &){
	xp += 10;
}

AMateria& AMateria::operator=(AMateria const &materia){
	xp = materia.xp;
	type = materia.type;
	return (*this);
}

AMateria::~AMateria(){}
