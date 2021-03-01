#include "Fixed.class.hpp"

Fixed::Fixed():number(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
	return;
}

Fixed::Fixed(int num){
	std::cout << "Int constructor called" << std::endl;
	number = num << literal;
	return;
}

Fixed::Fixed(float num){
	std::cout << "Float constructor called" << std::endl;
	number = roundf(num * (float)(1 << literal));
	return;
}

float  Fixed::toFloat(void)const{
	return ((float)number / (float)(1 << literal));
}

int    Fixed::toInt(void)const{
	return (number >> literal);
}

int       Fixed::getRawBits(void)const{
	return (number);
}

void   Fixed::setRawBits(int const raw){
	number = raw;
	return;
}

std::ostream& operator<<(std::ostream &out, const Fixed& a){
	out << a.toFloat();
 	return (out);
}

Fixed& Fixed::operator=(Fixed const &a){
	std::cout << "Assignation operator called" << std::endl;
	number = a.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}
