#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap{
public:
	SuperTrap(std::string newName);
	SuperTrap(SuperTrap const &clapTrap);
	SuperTrap&	operator=(SuperTrap const &clapTrap);
	~SuperTrap();
};

#endif