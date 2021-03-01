#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon):name(newName), weapon(&newWeapon){
	std::cout << "Create HumanA" << std::endl;
	return;
}

void	HumanA::attack(){
	std::cout << name << " " << weapon->getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "Delete HumanA" << std::endl;
	return;
}