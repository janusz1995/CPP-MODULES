#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"
# include <iostream>

class PowerFist : public AWeapon{
public:
	PowerFist();
	PowerFist(PowerFist const &powerFist);
	void	attack() const;
	PowerFist& operator=(PowerFist const &powerFist);
	~PowerFist();
};

#endif