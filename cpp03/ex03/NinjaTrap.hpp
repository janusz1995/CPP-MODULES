#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class NinjaTrap : public ClapTrap{
public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &clapTrap);
	void		ninjaShoebox(FragTrap &attack);
	void		ninjaShoebox(NinjaTrap &attack);
	void		ninjaShoebox(ScavTrap &attack);
	void		ninjaReplicas();
	NinjaTrap&	operator=(NinjaTrap const &clapTrap);
	~NinjaTrap();
};

#endif