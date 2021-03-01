#include <iostream>
#include <cmath>

void	write_message(std::string message) {
	std::cout << message << std::endl;
}

void	parse_to_char(double num_sym){
	std::cout << "char: ";
	if (std::isprint(num_sym)) {
		std::cout << "'" << static_cast<char>(num_sym) << "'" << std::endl;
	}
	else if (isnan(num_sym)) {
		write_message("impossible");
	}
	else {
		write_message("Non displayable");
	}
}

void	parse_to_int(double number) {
	std::cout << "int: ";
	if (INT_MAX < number || INT_MIN > number || isnan(number)) {
		std::cout << "impossible" << std::endl;
	}
	else
		std::cout << static_cast<int>(number) << std::endl;
}

void	parse_to_float(float number) {

	std::cout << "float: ";
	if (number - static_cast<int>(number) == 0.0) {
		std::cout << number << ".0";
	}
	else
		std::cout << number;
	std::cout << "f" << std::endl;
}

void		parse_to_double(double number) {
	std::cout << "double: ";
	if (number - static_cast<int>(number) == 0.0) {
		std::cout << number << ".0";
	}
	else
		std::cout << number;
	std::cout << std::endl;

}

void	parse_types(std::string type) {
	double number = std::strtod(type.c_str(), NULL);

	parse_to_char(number);
	parse_to_int(number);
	parse_to_float(number);
	parse_to_double(number);
}

int		write_error(std::string error) {
	std::cout << error << std::endl;
	return (0);
}

int		main(int argc, char *argv[]) {

	if (argc != 2)
		return (write_error("Wrong number of arguments!"));
	parse_types(argv[1]);

	return (0);
}