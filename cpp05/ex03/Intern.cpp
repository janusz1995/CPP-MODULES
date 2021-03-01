#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

static Form*	createPresidentialPardonForm(std::string target) {
	return (new PresidentialPardon(target));
}

static Form*	createRobotomyRequestForm(std::string target) {
	return (new RobotomyRequest(target));
}

static Form*	createShrubberyCreationForm(std::string target) {
	return (new ShrubberyCreation(target));
}

Intern::Intern() {}

Intern::Intern(const Intern &intern) {
	(void)intern;
}

Intern &Intern::operator=(const Intern &intern) {
	if (&intern != this)
		return (*this);
	return (*this);
}

Intern::~Intern() {}

Form* Intern::makeForm(std::string typeForm, std::string target) {
	Form *newForm = nullptr;
	Form* (*func[3])(std::string) = { createPresidentialPardonForm, createRobotomyRequestForm, createShrubberyCreationForm };
	std::string arrayNames[6] = {"presidential pardon form", "presidential pardon", "robotomy request form", "robotomy request", "shrubbery creation form", "shrubbery creation"};

	for (unsigned int i = 0; i < typeForm.length(); ++i)
		typeForm[i] = std::tolower(typeForm[i]);

//	std::transform(typeForm.begin(), typeForm.end(), typeForm.begin(), tolower);          -- I can use???

	for (int i = 0, j = 0; i < 3; ++i, j += 2)
	{
		if (typeForm == arrayNames[j] || typeForm == arrayNames[j + 1]) {
			return (newForm = func[i](target));
		}
	}
	throw NotFoundTypeException();
}

const char* Intern::NotFoundTypeException::what() const throw() {
	return ("No match found with forms!\n");
}
