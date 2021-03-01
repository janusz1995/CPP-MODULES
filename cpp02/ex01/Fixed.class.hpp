#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class Fixed{
private:
	int number;
	static const int literal = 8;
public:
	Fixed();
	Fixed(Fixed const &a);
	Fixed(float	num);
	Fixed(int	num);
	int		toInt(void)const;
	float	toFloat(void)const;
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	Fixed&	operator=(Fixed const &a);
	~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed& a);

#endif