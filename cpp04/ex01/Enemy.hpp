#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy{
protected:
	int			hp;
	std::string	type;
	Enemy();
public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &enemy);
	int	getHp() const;
	std::string getType() const;
	virtual void takeDamage(int);
	Enemy& operator=(Enemy const &enemy);
	virtual	~Enemy();
};

#endif