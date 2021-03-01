#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName):hitPoints(100), maxHitPoints(100), energyPoints(50),
		maxEnergyPoints(50), level(1), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3), name(newName){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &clapTrap){
	std::cout << "ScavTrap copy constructor called" << std::endl;
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

void	ScavTrap::rangedAttack(std::string const& target){
	std::cout << "ScavTrap " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const& target){
	std::cout << "ScavTrap " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	hitPoints -= (amount - armorDamageReduction);
	if (hitPoints < 0)
	{
		hitPoints = 0;
		std::cout << "ScavTrap Died - " << hitPoints << " hitPoints :(" << std::endl;
		return;
	}
	std::cout << "ScavTrap health - " << hitPoints << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount){
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
	{
		hitPoints = maxHitPoints;
		std::cout << "ScavTrap have max hitPoints - " << hitPoints << std::endl;
		return;
	}
	std::cout << "ScavTrap health - " << hitPoints << std::endl;
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