#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

// clang++ -Wall -Wextra -Werror *.cpp

int	main(void)
{
	std::cout << "---------------Test 1---------------" << std::endl;
	try {
		Bureaucrat me1("Carl", 151);
		std::cout << me1;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "---------------Test 2---------------" << std::endl;
	try {
		Bureaucrat me1("Carl", 1);
		std::cout << me1;

		me1.highGrade();
		std::cout << me1;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "---------------Test 3---------------" << std::endl;
	try {
		Bureaucrat me("Ivan", 120);
		std::cout << me;
		RobotomyRequest form("test");

		ShrubberyCreation form1("hallo");

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
	std::cout << "---------------Test 4---------------" << std::endl;
	try {
		Bureaucrat me2("Ivan", 1);
		Intern intern;
		Form *tmpForm;

		tmpForm = intern.makeForm("Shrubbery Creation Form", "Spartak");
		me2.signForm(*tmpForm);
		me2.executeForm((*tmpForm));
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "---------------Test 5---------------" << std::endl;
	try {
		Bureaucrat me3("Sierra", 1);
		Intern intern;
		Form *tmpForm;

		tmpForm = intern.makeForm("Shrubbery", "spartak");
		me3.signForm(*tmpForm);
		me3.executeForm((*tmpForm));
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	return (0);
}