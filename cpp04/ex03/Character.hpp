#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class Character : public ICharacter{
private:
	AMateria	*inventory[4];
	std::string name;
	int			counts_materia;
	Character();
public:
	Character(std::string name);
	Character(Character const &character);
	std::string const &getName() const;
	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	Character& operator=(Character const &character);
	~Character();
};

#endif