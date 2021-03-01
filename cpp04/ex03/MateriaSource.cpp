#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource():counts_materia_learns(0){}

MateriaSource::MateriaSource(MateriaSource const &materiaSource){
	counts_materia_learns = materiaSource.counts_materia_learns;
	for (int i = 0; i < counts_materia_learns; ++i)
		inventory[i] = materiaSource.inventory[i];
}

void MateriaSource::learnMateria(AMateria *materia){
	if (counts_materia_learns < 4)
	{
		inventory[counts_materia_learns++] = materia->clone();
	}
}

AMateria *MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < counts_materia_learns; ++i)
	{
		if (type == inventory[i]->getType())
		{
			return (inventory[i]->clone());
		}
	}
	return (nullptr);
}

MateriaSource& MateriaSource::operator=(MateriaSource const &materiaSource){
	counts_materia_learns = materiaSource.counts_materia_learns;
	for (int i = 0; i < counts_materia_learns; ++i)
		inventory[i] = materiaSource.inventory[i];
	return (*this);
}

MateriaSource::~MateriaSource(){}