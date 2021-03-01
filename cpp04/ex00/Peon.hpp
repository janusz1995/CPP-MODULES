#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"
# include <iostream>

class Peon : public Victim{
private:
	Peon();
public:
	Peon(std::string newName);
	Peon(Peon const &peon);
	void	getPolymorphed() const;
	Peon& operator=(Peon const &peon);
	~Peon();
};

#endif