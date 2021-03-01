#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human{
private:
	Brain const brain;
public:
	Human();
	std::string	identify(void);
	const Brain	&getBrain(void);
	~Human();
};

#endif