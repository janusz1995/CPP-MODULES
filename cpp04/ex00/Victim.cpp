#include "Victim.hpp"

Victim::Victim(std::string newName):name(newName){
	std::cout << "Some random victim called " + name + " just appeared!" << std::endl;
}

Victim::Victim(Victim const &victim){
	name = victim.name;
	std::cout << "Copy Constructor Victim called" << std::endl;
}

std::string		Victim::getName() const{
	return (name);
}

void	Victim::getPolymorphed() const{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

Victim& Victim::operator=(Victim const &victim){
	std::cout << "Victim Operator equal called" << std::endl;
	if (&victim != this)
		name = victim.name;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, Victim const &victim){
	out << "I'm " + victim.getName() + " and I like otters!" << std::endl;;
	return (out);
}

Victim::~Victim(){
	std::cout << "Victim " + name + " just died for no apparent reason!" << std::endl;
}