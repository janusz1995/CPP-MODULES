#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string newName):NinjaTrap(), FragTrap(){
	name = newName;
	level = 1;
	std::cout << "SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &clapTrap){
	std::cout << "SuperTrap copy constructor called" << std::endl;
	*this = clapTrap;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &clapTrap){
	std::cout << "SuperTrap assignation operator called" << std::endl;
	if (&clapTrap != this)
	{
		name = clapTrap.name;
		level = clapTrap.level;
		hitPoints = clapTrap.hitPoints;
		energyPoints = clapTrap.energyPoints;
		maxHitPoints = clapTrap.maxHitPoints;
		maxEnergyPoints = clapTrap.maxEnergyPoints;
		meleeAttackDamage = clapTrap.meleeAttackDamage;
		rangedAttackDamage = clapTrap.rangedAttackDamage;
		armorDamageReduction = clapTrap.armorDamageReduction;
	}
	return (*this);
}

SuperTrap::~SuperTrap(){
	std::cout << "SuperTrap deconstructor called" << std::endl;
	return;
}