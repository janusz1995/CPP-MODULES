#include "Character.hpp"

Character::Character(std::string newName):name(newName){}

Character::Character(Character const &character){
	name = character.name;
	counts_materia = character.counts_materia;
	for (int i = 0; i < counts_materia; ++i)
		inventory[i] = character.inventory[i];
}

std::string const &Character::getName() const{
	return (name);
}

void Character::equip(AMateria *materia){
	if (counts_materia < 4)
		inventory[counts_materia++] = materia;
}

void Character::unequip(int idx){
	if (counts_materia > 0 && idx > -1 && idx < 4)
	{
		inventory[counts_materia - 1] = nullptr;
		for (int i = 0; i < counts_materia; ++i)
		{
			inventory[i] = inventory[i + 1];
			inventory[i + 1] = nullptr;
		}
		counts_materia--;
	}
}

void Character::use(int idx, ICharacter &target){
	if (idx > -1 && idx < 4)
		inventory[idx]->use(target);
}

Character& Character::operator=(Character const &character){
	name = character.name;
	counts_materia = character.counts_materia;
	for (int i = 0; i < counts_materia; ++i)
		delete inventory[i];
	for (int i = 0; i < counts_materia; ++i)
		inventory[i] = character.inventory[i];
	return (*this);
}

Character::~Character(){}