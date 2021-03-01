#include "HumanB.hpp"

HumanB::HumanB(std::string newName):name(newName){
	std::cout << "Create HumanB" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &newWeapon){
	weapon = &newWeapon;
}

void	HumanB::attack(){
	std::cout << name << " " << weapon->getType() << std::endl;
}

HumanB::~HumanB(){
	std::cout << "Delete HumanB" << std::endl;
	return;
}