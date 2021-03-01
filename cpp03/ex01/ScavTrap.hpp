#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>

class ScavTrap{
private:
	int			hitPoints;
	int			maxHitPoints;
	int			energyPoints;
	int			maxEnergyPoints;
	int			level;
	int			meleeAttackDamage;
	int			rangedAttackDamage;
	int			armorDamageReduction;
	std::string name;
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &clapTrap);
	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer();
	ScavTrap&	operator=(ScavTrap const &clapTrap);
	~ScavTrap();
};


#endif