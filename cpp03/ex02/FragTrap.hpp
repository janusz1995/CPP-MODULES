#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &clapTrap);
	void		vaulthunter_dot_exe(std::string const& target);
	FragTrap&	operator=(FragTrap const &clapTrap);
	~FragTrap();
};


#endif