#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string newName):ClapTrap(newName, 60, 60, 120, 120, 1, 60, 5, 0){
	std::cout << "NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &clapTrap):ClapTrap(clapTrap){
	std::cout << "NinjaTrap copy constructor called" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &attack){
	std::cout << "Hello " << attack.getName() << "! It`s FragTrap." << std::endl;
	ninjaReplicas();
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &attack){
	std::cout << "Hello " << attack.getName() << "! It`s NinjaTrap." << std::endl;
	ninjaReplicas();
}

void	NinjaTrap::ninjaShoebox(ScavTrap &attack){
	std::cout << "Hello " << attack.getName() << "! It`s ScavTrap." << std::endl;
	ninjaReplicas();
}

void	NinjaTrap::ninjaReplicas(){

	int random = std::rand() % 5;
	std::string arr_replicas[] = {"Holy crap, that worked?", "I'm back! Woo!", "Ha ha ha! I LIVE! Hahaha!",
									"Wow, that actually worked?", "Hahahahaha! I'm alive!"};
	std::cout << arr_replicas[random] << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &clapTrap){
	std::cout << "NinjaTrap assignation operator called" << std::endl;
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

NinjaTrap::~NinjaTrap(){
	std::cout << "NinjaTrap deconstructor called" << std::endl;
	return;
}