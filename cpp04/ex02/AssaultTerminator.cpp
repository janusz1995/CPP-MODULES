#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &){}

AssaultTerminator* AssaultTerminator::clone() const{
	return (new class AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const{
	std::cout << "The code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &){
	return (*this);
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I`ll be back..." << std::endl;
}