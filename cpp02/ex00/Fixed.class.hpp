#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed{

private:
	int	number;
	static const int literal = 8;
public:
	Fixed();
	Fixed(Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed&	operator=(const Fixed &a);
	~Fixed();
};

#endif