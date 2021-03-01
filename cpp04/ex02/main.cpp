#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;

	std::cout << "-----------MY TESTS-------------" << std::endl;
	ISpaceMarine* bob2 = new TacticalMarine;
	ISpaceMarine* jim2 = new AssaultTerminator;

	Squad *s1 = new Squad;
	s1->push(bob2);
	s1->push(jim2);

	Squad *s2 = new Squad(*s1);

	std::cout << "----------Squad-1 attacks----------" << std::endl;
	for (int i = 0; i < s1->getCount(); ++i)
	{
		s1->getUnit(i)->battleCry();
		s1->getUnit(i)->rangedAttack();
		s1->getUnit(i)->meleeAttack();
	}

	std::cout << "----------Squad-2 attacks----------" << std::endl;
	for (int i = 0; i < s2->getCount(); ++i)
	{
		s2->getUnit(i)->battleCry();
		s2->getUnit(i)->rangedAttack();
		s2->getUnit(i)->meleeAttack();
	}
	std::cout << "----------DELETE Squad-1 AND Squad-2----------" << std::endl;
	delete s1;
	delete s2;

	return 0;
}