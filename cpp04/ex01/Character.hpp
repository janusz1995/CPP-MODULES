#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character{
private:
	std::string	name;
	int			ap;
	AWeapon		*weapon;
	Character();
public:
	Character(std::string const &name);
	Character(Character const &character);
	void		recoverAP();
	void		equip(AWeapon*);
	void		attack(Enemy*);
	int			getAP() const;
	std::string	getWeapon() const;
	std::string	virtual	getName() const;
	Character& operator=(Character const &character);
	~Character();
};

std::ostream& operator<<(std::ostream &out, Character const &character);

#endif