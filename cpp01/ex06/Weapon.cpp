#include "Weapon.hpp"

Weapon::Weapon(const std::string &type):weaponType(type){
	std::cout << "Create Weapon" << std::endl;
	return;
}

void	Weapon::setType(std::string newType){
	weaponType = newType;
	return;
}

std::string const &Weapon::getType(){
	return (weaponType);
}

Weapon::~Weapon(){
	std::cout << "Delete Weapon" << std::endl;
	return;
}