#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class NinjaTrap : virtual public ClapTrap{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &clapTrap);
	void		ninjaShoebox(FragTrap &attack);
	void		ninjaShoebox(NinjaTrap &attack);
	void		ninjaShoebox(ScavTrap &attack);
	void		ninjaReplicas();
	void		meleeAttack(std::string const& target);
	NinjaTrap&	operator=(NinjaTrap const &clapTrap);
	~NinjaTrap();
};

#endif