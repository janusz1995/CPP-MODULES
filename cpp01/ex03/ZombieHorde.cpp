#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int counts_zombie):counts_zombies(counts_zombie){

	int random_number_name;
	int random_number_type;
	std::string names_arr[] = {"Billy", "Chilly", "Gelly", "Villy", "Killy"};
	std::string types_arr[] = {"faster", "large", "clevering", "damaging", "little"};

	zombies = new class Zombie*[counts_zombie];
	for (int i = 0; i < counts_zombie; ++i)
	{
		random_number_name = std::rand() % 5;
		random_number_type = std::rand() % 5;
		zombies[i] = new Zombie(names_arr[random_number_name], types_arr[random_number_type]);
	}
}

void	ZombieHorde::announce(){

	for (int i = 0; i < counts_zombies; ++i)
		zombies[i]->announce();
}
ZombieHorde::~ZombieHorde(){
	for (int i = 0; i < counts_zombies; ++i)
		delete zombies[i];
	delete zombies;
	return;
}