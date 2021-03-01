#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
#include "Victim.hpp"

class Sorcerer{
private:
	std::string name;
	std::string title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &sorcerer);
	void	polymorph(Victim const &victim) const;
	std::string getName() const;
	std::string	getTitle() const;
	Sorcerer& operator=(Sorcerer const &sorcerer);
	~Sorcerer();
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &sorcerer);

#endif