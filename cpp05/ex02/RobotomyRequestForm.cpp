#include "RobotomyRequestForm.hpp"

RobotomyRequest::RobotomyRequest() {}

RobotomyRequest::RobotomyRequest(std::string target):Form("Robotomy Request", 72, 45, target){}

RobotomyRequest::RobotomyRequest(const RobotomyRequest &robotomyRequest):Form(robotomyRequest) {}

RobotomyRequest &RobotomyRequest::operator=(const RobotomyRequest &robotomyRequest){
	Form::operator=(robotomyRequest);
	return (*this);
}

RobotomyRequest::~RobotomyRequest() {}

void RobotomyRequest::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << "Makes some drilling noises, and tell us that " << executor.getName() <<
	" has been robotomized successfully 50% of the time." << std::endl;
}
