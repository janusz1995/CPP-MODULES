#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{
private:
	std::string	weaponType;
public:
	Weapon(const std::string &type);
	std::string const &getType();
	void		setType(std::string newType);
	~Weapon();
};

#endif