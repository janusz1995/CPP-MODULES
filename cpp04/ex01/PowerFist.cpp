#include "PowerFist.hpp"

PowerFist::PowerFist():AWeapon("Power Fist", 8, 50){}

PowerFist::PowerFist(PowerFist const &powerFist):AWeapon(powerFist){}

void	PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const &powerFist){
	if (&powerFist != this)
	{
		name = powerFist.name;
		apcost = powerFist.apcost;
		damage = powerFist.damage;
	}
	return (*this);
}

PowerFist::~PowerFist(){}
