#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &clapTrap);
	void		challengeNewcomer();
	ScavTrap&	operator=(ScavTrap const &clapTrap);
	~ScavTrap();
};

#endif