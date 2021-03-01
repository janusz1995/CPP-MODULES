#include "Character.hpp"

Character::Character(std::string const &newName):name(newName), ap(40), weapon(NULL){}

Character::Character(Character const &character){
	name = character.name;
	ap = character.ap;
	weapon = character.weapon;
}

void	Character::recoverAP(){
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void	Character::equip(AWeapon *newWeapon){
	weapon = newWeapon;
}

void	Character::attack(Enemy *enemy){
	if (weapon != NULL)
	{
		if (ap > weapon->getApcost())
		{
			ap -= weapon->getApcost();
			std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
			weapon->attack();
			enemy->takeDamage(weapon->getDamage());
			if (enemy->getHp() < 1)
			{
				delete enemy;
			}
		}
	}
}

std::string	Character::getName() const{
	return (name);
}

int	Character::getAP() const{
	return (ap);
}

std::string	Character::getWeapon() const{
	if (weapon == NULL)
		return ("is unarmed");
	else
		return ("wields a " + weapon->getName());
}

Character& Character::operator=(Character const &character){
	if (&character != this)
	{
		name = character.name;
		ap = character.ap;
		weapon = character.weapon;
	}
	return  (*this);
}

std::ostream& operator<<(std::ostream &out, const Character &character){
	out << character.getName() << " has " << character.getAP() << " and " << character.getWeapon() << std::endl;
	return (out);
}

Character::~Character(){}