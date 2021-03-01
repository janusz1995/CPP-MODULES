#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// clang++ -Wall -Wextra -Werror *.cpp

int	main(void)
{
	try {
		Bureaucrat me1("Carl", 151);
		std::cout << me1;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	try {
		Bureaucrat me1("Carl", 1);
		std::cout << me1;

		me1.highGrade();
		std::cout << me1;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	try {
		Bureaucrat me("Ivan", 120);
		std::cout << me;
		RobotomyRequest form("test");

		ShrubberyCreation form1("allo");

		Bureaucrat me1("Carl", 40);
		std::cout << me1;

		me1.signForm(form);
		me1.signForm(form1);

		std::cout << form;
		me1.executeForm(form);
		me1.executeForm(form1);
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	try {

	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	return (0);
}