#include "Human.hpp"

Human::Human(){
	std::cout << "Create Human" << std::endl;
	return;
}

std::string	Human::identify(void){

	return (brain.identify());
}

const Brain& Human::getBrain(void){
	return (brain);
}

Human::~Human(){
	std::cout << "Delete Human" << std::endl;
	return;
}