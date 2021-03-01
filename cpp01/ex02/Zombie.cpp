#include "Zombie.hpp"

Zombie::Zombie(std::string newName, std::string newType):name(newName),type(newType)
{
	std::cout << "Create Zombie" << std::endl;
	return;
}

void	Zombie::announce(){
	std::cout << name << " " << type << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Delete Zombie" << std::endl;
	return;
}