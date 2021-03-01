#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &plasmaRifle):AWeapon(plasmaRifle){}

void	PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &plasmaRifle){
	if (&plasmaRifle != this)
	{
		name = plasmaRifle.name;
		apcost = plasmaRifle.apcost;
		damage = plasmaRifle.damage;
	}
	return (*this);
}

PlasmaRifle::~PlasmaRifle(){}
