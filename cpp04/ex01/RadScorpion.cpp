#include "RadScorpion.hpp"

RadScorpion::RadScorpion():Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &radScorpion):Enemy(radScorpion){}

RadScorpion& RadScorpion::operator=(RadScorpion const &radScorpion){
	if (&radScorpion != this)
	{
		hp = radScorpion.hp;
		type = radScorpion.type;
	}
	return  (*this);
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}