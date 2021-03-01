#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap ClapTrap("Daniel");
	ScavTrap scavTrap("Brayn");

	srand(std::time(NULL));

	std::cout << "'--------------------FragTrap--------------------'" << std::endl;
	ClapTrap.rangedAttack("Athena The Gladiator");
	ClapTrap.meleeAttack("Wilhelm the Enforcer");

	ClapTrap.takeDamage(40);
	ClapTrap.beRepaired(10);

	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	std::cout << "'*****************VaultHunter.exe*****************'" << std::endl;
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");

	std::cout << "'--------------------ScavTrap--------------------'" << std::endl;
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

	return (0);
}
