#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string newName, int hitP, int maxHitP, int energyP, int maxEnergyP, int lvl, int meleeAttack, int rangeAttack, int armor):
					hitPoints(hitP), maxHitPoints(maxHitP), energyPoints(energyP), maxEnergyPoints(maxEnergyP), level(lvl),
					meleeAttackDamage(meleeAttack), rangedAttackDamage(rangeAttack), armorDamageReduction(armor), name(newName){
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap){
	std::cout << "ClapTrap copy constructor called" << std::endl;
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

void	ClapTrap::rangedAttack(std::string const& target){
	std::cout << "ClapTrap " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const& target){
	std::cout << "ClapTrap " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	hitPoints -= (amount - armorDamageReduction);
	if (hitPoints < 0)
	{
		hitPoints = 0;
		std::cout << "ClapTrap Died - " << hitPoints << " hitPoints :(" << std::endl;
		return;
	}
	std::cout << "ClapTrap health - " << hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
	{
		hitPoints = maxHitPoints;
		std::cout << "ClapTrap have max hitPoints - " << hitPoints << std::endl;
		return;
	}
	std::cout << "ClapTrap health - " << hitPoints << std::endl;
}

std::string	ClapTrap::getName(){
	return (name);
}

ClapTrap& ClapTrap::operator=(ClapTrap const &clapTrap){
	std::cout << "ClapTrap assignation operator called" << std::endl;
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

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor called" << std::endl;
	return;
}