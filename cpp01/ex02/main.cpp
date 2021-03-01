#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump()
{
	int random_number_name;
	int random_number_type;
	Zombie *new_zombi;

	std::string names_arr[] = {"Billy", "Chilly", "Gelly", "Villy", "Killy"};
	std::string types_arr[] = {"faster", "large", "clevering", "damaging", "little"};
	random_number_name = std::rand() % 5 ;
	random_number_type = std::rand() % 5;;
	new_zombi = new class Zombie(names_arr[random_number_name], types_arr[random_number_type]);
	new_zombi->announce();
	delete new_zombi;
}

int		main(void)
{
	Zombie zombie_on_stack("Filly", "Slow");
	ZombieEvent event_zombie;

	event_zombie.setZombieType("stupid");
	Zombie *zombi_on_heap_one = event_zombie.newZombie("Grag");
	Zombie *zombi_on_heap_two = event_zombie.newZombie("Brad");
	Zombie *zombi_on_heap_three = event_zombie.newZombie("Frag");

	zombie_on_stack.announce();
	zombi_on_heap_one->announce();
	zombi_on_heap_two->announce();
	zombi_on_heap_three->announce();
	randomChump();

	delete zombi_on_heap_one;
	delete zombi_on_heap_two;
	delete zombi_on_heap_three;
	return (0);
}
