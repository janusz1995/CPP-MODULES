#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim{
protected:
	std::string name;
	Victim();
public:
	Victim(std::string name);
	Victim(Victim const &victim);
	std::string		getName() const;
	virtual	void	getPolymorphed() const;
	Victim& operator=(Victim const &victim);
	virtual ~Victim();
};

std::ostream& operator<<(std::ostream &out, const Victim &victim);

#endif