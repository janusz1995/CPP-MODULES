#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreation::ShrubberyCreation() {}

ShrubberyCreation::ShrubberyCreation(std::string target):Form("Shrubbery Creation", 145, 137, target) {}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation &shrubberyCreation):Form(shrubberyCreation) {}

ShrubberyCreation &ShrubberyCreation::operator=(const ShrubberyCreation &shrubberyCreation) {
	Form::operator=(shrubberyCreation);
	return (*this);
}

ShrubberyCreation::~ShrubberyCreation() {}

void ShrubberyCreation::execute(Bureaucrat const &executor) const {
	Form::execute(executor);

	std::ofstream write_fd(this->getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (!write_fd.is_open()) {
		throw ShrubberyCreation::NotCanOpenFileException();
	}
	write_fd << ""
		"                                                         ." << std::endl <<
		"                                              .         ;  " << std::endl <<
		"                 .              .              ;%     ;;   " << std::endl <<
		"                   ,           ,                :;%  %;  " << std::endl <<
		"                    :         ;                   :;%;'     .,  " << std::endl <<
		"           ,.        %;     %;            ;        %;'    ,; " << std::endl <<
		"             ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl <<
		"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl <<
		"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
		"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
		"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
		"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
		"                      `@%:.  :;%.         ;@@%;'  " << std::endl <<
		"                        `@%.  `;@%.      ;@@%;  " << std::endl <<
		"                          `@%%. `@%%    ;@@%;  " << std::endl <<
		"                            ;@%. :@%%  %@@%;  " << std::endl <<
		"                              %@bd%%%bd%%:;  " << std::endl <<
		"                                #@%%%%%:;;" << std::endl <<
		"                                %@@%%%::;" << std::endl <<
		"                                %@@@%(o);  . '   " << std::endl <<
		"                                %@@@o%;:(.,'  " << std::endl <<
		"                            `.. %@@@o%::;    " << std::endl <<
		"                               `)@@@o%::;     " << std::endl <<
		"                                %@@(o)::;     " << std::endl <<
		"                               .%@@@@%::;         " << std::endl <<
		"                               ;%@@@@%::;.        " << std::endl <<
		"                              ;%@@@@%%:;;;. " << std::endl <<
		"                          ...;%@@@@@%%:;;;;,..   " << std::endl;
	write_fd.close();
}

const char* ShrubberyCreation::NotCanOpenFileException::what() const throw() {
	return ("Can`t open file!\n");
}