#include "PresidentialPardonForm.hpp"

PresidentialPardon::PresidentialPardon() {}

PresidentialPardon::PresidentialPardon(std::string target):Form("Presidential Pardon", 25, 5, target){}

PresidentialPardon::PresidentialPardon(const PresidentialPardon &presidentialPardon):Form(presidentialPardon){}

PresidentialPardon &PresidentialPardon::operator=(const PresidentialPardon &presidentialPardon){
	Form::operator=(presidentialPardon);
	return (*this);
}

PresidentialPardon::~PresidentialPardon(){}

void PresidentialPardon::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << "Tells us " << executor.getName() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}
