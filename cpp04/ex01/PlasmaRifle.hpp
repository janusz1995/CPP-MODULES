#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &plasmaRifle);
	void	attack() const;
	PlasmaRifle& operator=(PlasmaRifle const &plasmaRifle);
	~PlasmaRifle();
};

#endif