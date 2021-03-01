#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string newName, int newGrade):name(newName), grade(newGrade){
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat):name(bureaucrat.name), grade(bureaucrat.grade){}

void Bureaucrat::highGrade(){
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade -= 1;
}

void Bureaucrat::lowGrade(){
	if (grade + 1 < 1)
		throw GradeTooLowException();
	grade += 1;
}

std::string Bureaucrat::getName() const{
	return (name);
}

int	Bureaucrat::getGrade() const{
	return (grade);
}

void Bureaucrat::signForm(Form &form){
	form.beSigned(*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is High!\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is Low!\n");
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat){
	if (&bureaucrat != this)
		grade = bureaucrat.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}