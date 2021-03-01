#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include <iostream>

class Squad : public ISquad{
private:

typedef struct s_warriors{
	ISpaceMarine		*warrior;
	struct s_warriors	*next;
}						t_warriors;

int 				counts_warriors;
s_warriors			*head;

public:
	Squad();
	Squad(Squad const &squad);
	int				getCount() const;
	int				push(ISpaceMarine*);
	ISpaceMarine*	getUnit(int) const;
	Squad& operator=(Squad const &squad);
	~Squad();
};

#endif