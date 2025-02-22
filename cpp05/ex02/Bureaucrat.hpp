#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	~Bureaucrat();

	void lowGrade();
	void highGrade();
	int	getGrade() const;
	void signForm(Form &form);
	std::string	getName() const;
	void executeForm(Form const &form) const;

	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif