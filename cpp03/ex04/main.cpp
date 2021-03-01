#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define WHITE "\x1b[37m"
#define BLUE "\x1b[34m"
#define YELLOW "\x1b[33m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"

int		main(void)
{
	std::cout << GREEN << "//////////////Constructors//////////////" << std::endl;;
	FragTrap	fragTrap("Daniel");
	ScavTrap	scavTrap("Brayn");
	NinjaTrap	ninjaTrap("Kyle");
	SuperTrap	superTrap("Edvard");
	std::cout << WHITE;

	srand(std::time(NULL));

	std::cout << "'--------------------FragTrap--------------------'" << std::endl;
	std::cout << BLUE;
	fragTrap.rangedAttack("Athena The Gladiator");
	fragTrap.meleeAttack("Wilhelm the Enforcer");

	fragTrap.takeDamage(40);
	fragTrap.beRepaired(10);

	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	fragTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	fragTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	fragTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	fragTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");

	std::cout << WHITE;
	std::cout << "'--------------------ScavTrap--------------------'" << std::endl;
	std::cout << YELLOW;
	scavTrap.meleeAttack("RadScorpion");
	scavTrap.rangedAttack("Doppelganger");

	scavTrap.takeDamage(90);
	scavTrap.beRepaired(55);

	std::cout << "++++++++++++++++++Challenge Newcomer++++++++++++++++++'" << std::endl;
	scavTrap.challengeNewcomer();
	std::cout << "++++++++++++++++++Challenge Newcomer++++++++++++++++++'" << std::endl;
	scavTrap.challengeNewcomer();
	std::cout << "++++++++++++++++++Challenge Newcomer++++++++++++++++++'" << std::endl;
	scavTrap.challengeNewcomer();

	std::cout << WHITE;
	std::cout << "'--------------------NinjaTrap--------------------'" << std::endl;
	std::cout << MAGENTA;
	ninjaTrap.meleeAttack("RadScorpion");
	ninjaTrap.rangedAttack("Doppelganger");

	ninjaTrap.takeDamage(50);
	ninjaTrap.beRepaired(10);

	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	ninjaTrap.ninjaShoebox(scavTrap);

	std::cout << WHITE;
	std::cout << "'--------------------SuperTrap--------------------'" << std::endl;
	std::cout << CYAN;
	superTrap.rangedAttack("Elle");
	superTrap.meleeAttack("Carl");
	superTrap.takeDamage(45);
	superTrap.beRepaired(20);
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	superTrap.vaulthunter_dot_exe("RadScorpion");
	superTrap.ninjaShoebox(fragTrap);
	superTrap.ninjaShoebox(ninjaTrap);
	superTrap.ninjaShoebox(scavTrap);

	std::cout << RED << "//////////////Deconstructors//////////////" << std::endl;
	return (0);
}
