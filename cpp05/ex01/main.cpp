#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat me("Ivan", 120);
		std::cout << me;
		Form form("312", 5, 50);
//		Bureaucrat me1("Carl", 151);
//		std::cout << me1;
		Bureaucrat me1("Carl", 1);
		std::cout << me1;
//		me1.highGrade();
//		std::cout << me1;

		me1.signForm(form);
//		me1.signForm(form);
//		form.beSigned(me1);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	return (0);
}
