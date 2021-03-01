#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequest : public Form{
public:
	RobotomyRequest(std::string target);
	RobotomyRequest(const RobotomyRequest &robotomyRequest);
	RobotomyRequest &operator=(const RobotomyRequest &robotomyRequest);
	~RobotomyRequest();

	void execute(Bureaucrat const &executor) const;
private:
	RobotomyRequest();
};

#endif