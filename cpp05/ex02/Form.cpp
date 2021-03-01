#include "Form.hpp"

Form::Form():grade(0) {}

Form::Form(std::string newName, int newGrade, int newExecGrade, std::string newTarget):name(newName), grade(newGrade), execGrade(newExecGrade), target(newTarget), signedForm(false) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(const Form &form):name(form.name), grade(form.grade), execGrade(form.execGrade), target(form.target), signedForm(form.signedForm) {}

Form	&Form::operator=(const Form &form) {
	if (&form != this) {
		execGrade = form.execGrade;
		signedForm = form.signedForm;
	}
	return (*this);
}

Form::~Form() {}

int			Form::getGrade() const {
	return (grade);
}

std::string	Form::getName() const {
	return (name);
}

std::string Form::getTarget() const {
	return (target);
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

void Form::execute(Bureaucrat const &executor) const{
	if (!signedForm) {
		throw FormIsNotSignedException();
	}
	else if (execGrade < executor.getGrade()) {
		throw GradeTooExecLowException();
	}
	else
		std::cout << executor.getName() << " executes " << this->getName() << "." << std::endl;
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("grade for signature is Low!\n");
}

const char* Form::FormIsNotSignedException::what() const throw() {
	return ("Form is not signed!\n");
}

const char* Form::GradeTooExecLowException::what() const throw() {
	return ("Grade for execute is Low!\n");
}

std::ostream&	operator<<(std::ostream &out, const Form &form) {
	out << "Form " << form.getName() << " is ";
	if (!form.getSignedForm())
		out << "not ";
	out << "signed." << std::endl;
	return (out);
}