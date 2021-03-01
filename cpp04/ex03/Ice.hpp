#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(Ice const &ice);
	Ice* clone() const;
	void use(ICharacter &target);
	Ice& operator=(Ice const &ice);
	~Ice();
};

#endif