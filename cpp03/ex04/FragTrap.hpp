#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &clapTrap);
	void		rangedAttack(std::string const& target);
	void		vaulthunter_dot_exe(std::string const& target);
	FragTrap&	operator=(FragTrap const &clapTrap);
	~FragTrap();
};

#endif