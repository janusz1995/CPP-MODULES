#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	ZombieStack()
{
	Zombie zombie_on_stack("Virgil", "idiot");
	zombie_on_stack.announce();
}

int		main(void)
{
	ZombieHorde *many_zombies;
	many_zombies = new class ZombieHorde(5);

	ZombieStack();
	many_zombies->announce();
	delete many_zombies;
	return (0);
}