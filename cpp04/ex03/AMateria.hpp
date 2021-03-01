#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria{
private:
	unsigned int	xp;
	std::string		type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &materia);
	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria& operator=(AMateria const &materia);
	virtual ~AMateria();
};

#endif