#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(Cure const &cure);
	Cure* clone() const;
	void use(ICharacter &target);
	Cure& operator=(Cure const &cure);
	~Cure();
};

#endif