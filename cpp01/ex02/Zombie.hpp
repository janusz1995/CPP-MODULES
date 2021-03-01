#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
private:
	std::string name;
	std::string type;
public:
	Zombie(std::string zombie_name, std::string zombie_type);
	void	announce();
	~Zombie();
};

#endif
