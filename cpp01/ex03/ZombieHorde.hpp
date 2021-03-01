#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde{
private:
	Zombie **zombies;
	int		counts_zombies;
public:
	ZombieHorde(int counts_zombie);
	void	announce();
	~ZombieHorde();

};

#endif