#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreation : public Form {
public:
	ShrubberyCreation(std::string target);
	ShrubberyCreation(const ShrubberyCreation &shrubberyCreation);
	ShrubberyCreation &operator=(const ShrubberyCreation &shrubberyCreation);
	~ShrubberyCreation();

	void execute(Bureaucrat const &executor) const;

	class NotCanOpenFileException : public std::exception{
		const char* what() const throw();
	};
private:
	ShrubberyCreation();
};

#endif