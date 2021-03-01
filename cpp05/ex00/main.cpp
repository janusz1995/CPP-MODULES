#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat me("Ivan", 120);
		std::cout << me;
//		Bureaucrat me1("Carl", 151);
//		std::cout << me1;
		Bureaucrat me1("Carl", 1);
		std::cout << me1;
		me1.highGrade();
		std::cout << me1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	return (0);
}