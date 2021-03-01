#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{

	std::cout << "------------------DEFAULT TESTS--------------"<< std::endl;
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;

	me->equip(pf);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;
	delete pr;
	std::cout << "------------------MY TESTS--------------"<< std::endl;

	Enemy* c = new SuperMutant();
	me->equip(pf);

	me->attack(c);
	std::cout << *me;
	std::cout << c->getHp() << std::endl;

	me->attack(c);
	std::cout << *me;

	me->attack(c);
	std::cout << *me;

	me->attack(c);
	std::cout << *me;

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	std::cout << c->getHp() << std::endl;

	me->attack(c);
	std::cout << *me;

	me->attack(c);
	std::cout << *me;
	std::cout << c->getHp() << std::endl;

	return (0);
}