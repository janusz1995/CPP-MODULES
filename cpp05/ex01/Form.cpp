#include "Form.hpp"

Form::Form():grade(0){}

Form::Form(std::string newName, int newGrade, int newExecGrade):name(newName), grade(newGrade), execGrade(newExecGrade), signedForm(false) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(const Form &form):name(form.name), grade(form.grade), execGrade(form.execGrade), signedForm(form.signedForm) {}

int		Form::getGrade() const {
	return (grade);
}

std::string	Form::getName() const {
	return (name);
}

bool		Form::getSignedForm() const {
	return (signedForm);
}

void		Form::beSigned(Bureaucrat &bureaucrat){
	if (signedForm == true) {
		std::cout << "Form "<< this->getName() << " is already signed " << bureaucrat.getName() << "." << std::endl;
	}
	else if (bureaucrat.getGrade() <= grade) {
		signedForm = true;
		std::cout << bureaucrat.getName() << " signs " << "form " << this->getName() << "." << std::endl;
	}
	else {
		std::cout << bureaucrat.getName() << " cannot sign " << name << " because ";
		throw Form::GradeTooLowException();
	}
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("grade for signature is Low!\n");
}

Form	&Form::operator=(const Form &form) {
	if (&form != this) {
		execGrade = form.execGrade;
		signedForm = form.signedForm;
	}
	return (*this);
}

Form::~Form() {}

std::ostream&	operator<<(std::ostream &out, const Form &form) {
	out << "Form " << form.getName() << " is ";
	if (!form.getSignedForm())
		out << "not ";
	out << "signed." << std::endl;
	return (out);
}
