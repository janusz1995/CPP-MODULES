#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria	*inventory[4];
	int			counts_materia_learns;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &materiaSource);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const &type);
	MateriaSource& operator=(MateriaSource const &materiaSource);
	~MateriaSource();
};

#endif