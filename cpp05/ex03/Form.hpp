#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	const std::string	name;
	const int			grade;
	int					execGrade;
	std::string			target;
	bool				signedForm;

public:
	Form();
	Form(std::string name, int grade, int execGrade, std::string target);
	Form(const Form &form);
	Form &operator=(const Form &form);
	virtual ~Form();

	std::string	getName() const;
	int			getGrade() const;
	std::string getTarget() const;
	bool		getSignedForm() const;
	void		beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};

	class FormIsNotSignedException : public std::exception{
		const char* what() const throw();
	};

	class GradeTooExecLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Form &form);

#endif