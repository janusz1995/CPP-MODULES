#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName):hitPoints(100), maxHitPoints(100), energyPoints(100),
		maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20), armorDamageReduction(5), name(newName){
	std::cout << "FR4G-TP constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &clapTrap){
	std::cout << "FR4G-TP copy constructor called" << std::endl;
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

void	FragTrap::rangedAttack(std::string const& target){
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target){
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	hitPoints -= (amount - armorDamageReduction);
	if (hitPoints < 0)
	{
		hitPoints = 0;
		std::cout << "FR4G-TP Died - " << hitPoints << " hitPoints :(" << std::endl;
		return;
	}
	std::cout << "FR4G-TP health - " << hitPoints << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
	{
		hitPoints = maxHitPoints;
		std::cout << "FR4G-TP have max hitPoints - " << hitPoints << std::endl;
		return;
	}
	std::cout << "FR4G-TP health - " << hitPoints << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target){
	int random = std::rand() % 7;
	std::string arr_launch[] = {"This time it'll be awesome, I promise!", "Recompiling my combat code!", "F to the R to the 4 to the G to the WHAAT!",
								"Let's get this party started!", "Place your bets!", "It's happening... it's happening!", "Push this button, flip this dongle, voila! Help me!"};
	std::string arr_replicas[] = {"I'm a sexy dinosaur! Rawr!", "Don't ask me where this ammo's coming from!", "It's the only way to stop the voices!",
							"Aww, I should've drawn tattoos on you!", "Burn them, my mini-phoenix!", "Anarchy and mini-trap and awesomeness, oh my!",
							"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!", "I'm going commando!", "Go on without me!", "Nurse Clap is here!",
							"Never fear, sugar!", "Love bullets!", "It's time for my free grenade giveaway!", "How many ways can I say... THROWING GRENADE?!",
							"Grenade confetti!", "I brought you a present: EXPLOSIONS!", "You can call me Gundalf!", "Avada kedavra!",
							"Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!"};
	if (energyPoints < 25)
	{
		std::cout << "FR4G-TP don`t have energy :( " << std::endl;
		return;
	}
	energyPoints -= 25;
	std::cout << arr_launch[random] << std::endl;
	std::cout << "FR4G-TP " << name << " attacks " << target << std::endl;
	random = std::rand() % 19;
	std::cout << arr_replicas[random] << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &clapTrap){
	std::cout << "FR4G-TP assignation operator called" << std::endl;
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

FragTrap::~FragTrap(){
	std::cout << "FR4G-TP deconstructor called" << std::endl;
	return;
}