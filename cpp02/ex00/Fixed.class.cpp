#include "Fixed.class.hpp"

Fixed::Fixed():number(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
	return;
}

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void	Fixed::setRawBits(int const raw){
	number = raw;
	return;
}

Fixed& Fixed::operator=(const Fixed &a){
	std::cout << "Assignation operator called" << std::endl;
	number = a.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}
