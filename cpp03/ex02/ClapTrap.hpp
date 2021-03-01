#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
protected:
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
	ClapTrap(std::string newName, int hitP, int maxHitP, int energyP, int maxEnergyP,
				int lvl, int meleeAttack, int rangeAttack, int armor);
	ClapTrap(ClapTrap const &clapTrap);
	void		rangedAttack(std::string const& target);
	void		meleeAttack(std::string const& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer();
	ClapTrap&	operator=(ClapTrap const &clapTrap);
	~ClapTrap();
};

#endif