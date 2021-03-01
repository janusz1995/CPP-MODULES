#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &superMutant):Enemy(superMutant){}

void SuperMutant::takeDamage(int damage){
	damage -= 3;
	if (damage > 0)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0;
	}
}

SuperMutant& SuperMutant::operator=(SuperMutant const &superMutant){
	if (&superMutant != this)
	{
		hp = superMutant.hp;
		type = superMutant.type;
	}
	return (*this);
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}
