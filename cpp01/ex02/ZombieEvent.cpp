#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	ZombieEvent::setZombieType(std::string newType)
{
	zombie_type = newType;
	return;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie;
	new_zombie = new class Zombie(name, zombie_type);
	return (new_zombie);
}