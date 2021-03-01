#include "FragTrap.hpp"

int		main(void)
{
	FragTrap ClapTrap("Daniel");

	srand(std::time(NULL));

	ClapTrap.rangedAttack("Athena The Gladiator");
	ClapTrap.meleeAttack("Wilhelm the Enforcer");

	ClapTrap.takeDamage(40);
	ClapTrap.beRepaired(10);

	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");
	ClapTrap.vaulthunter_dot_exe("Handsome Jack's Doppelganger");

	return (0);
}
