#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardon : public Form {
public:
	PresidentialPardon(std::string target);
	PresidentialPardon(const PresidentialPardon &presidentialPardon);
	PresidentialPardon &operator=(const PresidentialPardon &presidentialPardon);
	~PresidentialPardon();

	void execute(Bureaucrat const &executor) const;
private:
	PresidentialPardon();
};

#endif