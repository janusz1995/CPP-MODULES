#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string newName, std::string newTitle):name(newName), title(newTitle){
	std::cout << name + ", " << title + ", " << "is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sorcerer){
	name = sorcerer.name;
	title = sorcerer.title;
	std::cout << "Copy Constructor called" << std::endl;
}

void	Sorcerer::polymorph(Victim const &victim) const{
	victim.getPolymorphed();
}

std::string Sorcerer::getName() const{
	return (name);
}

std::string	Sorcerer::getTitle() const{
	return (title);
}

Sorcerer& Sorcerer::operator=(Sorcerer const &sorcerer){
	std::cout << "Sorcerer Operator equal called" << std::endl;
	if (&sorcerer != this)
	{
		name = sorcerer.name;
		title = sorcerer.title;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream &out, Sorcerer const &sorcerer){
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << "and I like ponies!" << std::endl;
	return (out);
}

Sorcerer::~Sorcerer(){
	std::cout << name << ", " << title << ", " << "died! Consequences will never be the same!" << std::endl;
}
