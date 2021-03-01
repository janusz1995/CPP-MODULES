#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent{
private:
		std::string zombie_type;
public:
	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);
};

#endif
