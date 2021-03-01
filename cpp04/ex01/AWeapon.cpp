#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &newName, int newApcost, int newDamage):name(newName), apcost(newApcost), damage(newDamage){}

AWeapon::AWeapon(AWeapon const &weapon){
	name = weapon.name;
	apcost = weapon.apcost;
	damage = weapon.damage;
}

std::string	AWeapon::getName()const{
	return (name);
}

int	AWeapon::getApcost() const{
	return (apcost);
}
int AWeapon::getDamage() const{
	return (damage);
}

AWeapon& AWeapon::operator=(AWeapon const &weapon){
	if (&weapon != this)
	{
		name = weapon.name;
		apcost = weapon.apcost;
		damage = weapon.damage;
	}
	return (*this);
}
AWeapon::~AWeapon(){}
