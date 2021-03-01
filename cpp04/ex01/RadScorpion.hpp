#ifndef PADSCORPION_HPP
# define PADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &radScorpion);
	RadScorpion& operator=(RadScorpion const &radScorpion);
	virtual ~RadScorpion();
};
#endif