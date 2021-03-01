#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"

class Form;

class Intern{
public:
	Intern();
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);
	~Intern();

	Form* makeForm(std::string typeForm, std::string target);
	class NotFoundTypeException : public std::exception{
		const char* what() const throw();
	};
};

#endif