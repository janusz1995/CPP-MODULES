#include "Enemy.hpp"

Enemy::Enemy(int newHp, std::string const &newType):hp(newHp), type(newType){}

Enemy::Enemy(Enemy const &enemy){
	hp = enemy.hp;
	type = enemy.type;
}

int	Enemy::getHp() const{
	return (hp);
}

std::string Enemy::getType() const{
	return (type);
}

void   Enemy::takeDamage(int damage){
	if (damage > 0)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0;
	}
}

Enemy& Enemy::operator=(Enemy const &enemy){
	if (&enemy != this)
	{
		hp = enemy.hp;
		type = enemy.type;
	}
	return (*this);
}

Enemy::~Enemy(){}
