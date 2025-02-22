#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &);
	TacticalMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	TacticalMarine& operator=(TacticalMarine const &);
	~TacticalMarine();
};

#endif