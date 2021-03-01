#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string newName):ClapTrap(newName, 100, 100, 50, 50, 1, 20, 15, 3){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &clapTrap):ClapTrap(clapTrap){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::challengeNewcomer(){
	int random = std::rand() % 5;
	std::string	arr_challenges[] = {"Oh my gosh, a challenge!", "I did a challenge? I did a challenge!",
									"Glad I didn't mess that up.", "I feel... complete! ... That's weird.",
									"I actually did something right for once!"};
	std::cout << arr_challenges[random] << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &clapTrap){
	std::cout << "ScavTrap assignation operator called" << std::endl;
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

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap deconstructor called" << std::endl;
	return;
}
