#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon{
protected:
	std::string	name;
	int			apcost;
	int			damage;
	AWeapon();
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &aweapon);
	std::string		getName() const;
	int				getApcost() const;
	int 			getDamage() const;
	virtual	void	attack() const = 0;
	AWeapon& operator=(AWeapon const &weapon);
	virtual			~AWeapon();
};

#endif