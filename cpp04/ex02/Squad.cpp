#include "Squad.hpp"

Squad::Squad():counts_warriors(0), head(nullptr){}

Squad::Squad(Squad const &squad){
	struct s_warriors *tmp = squad.head;
	head = new struct s_warriors;
	struct s_warriors *tmp2 = head;

	counts_warriors = squad.counts_warriors;
	for (int i = 0; i < squad.counts_warriors; ++i)
	{
		tmp2->warrior = tmp->warrior->clone();
		if (tmp->next != nullptr)
		{
			tmp = tmp->next;
			tmp2->next = new struct s_warriors;
			tmp2 = tmp2->next;
			tmp2->next = nullptr;
		}
	}
}

int	Squad::getCount() const{
	return (counts_warriors);
}

int	Squad::push(ISpaceMarine *warrior){
	struct s_warriors *tmp;
	if (head == nullptr)
	{
		head = new struct s_warriors;
		head->warrior = warrior;
		head->next = nullptr;
	}
	else
	{
		tmp = head;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}
		tmp->next = new struct s_warriors;
		tmp = tmp->next;
		tmp->warrior = warrior;
		tmp->next = nullptr;
	}
	counts_warriors++;
	return (counts_warriors);
}

ISpaceMarine*	Squad::getUnit(int number) const{
	struct s_warriors *tmp;
	tmp = head;
	if (number >= counts_warriors)
		return (nullptr);
	for (int i = 0; i < number; ++i)
	{
		tmp = tmp->next;
	}
	return (tmp->warrior);
}

Squad& Squad::operator=(Squad const &squad){
	struct s_warriors *tmp = squad.head;
	head = new struct s_warriors;
	struct s_warriors *tmp2 = head;
	counts_warriors = squad.counts_warriors;

	for (int i = 0; i < squad.counts_warriors; ++i)
	{
		tmp2->warrior = tmp->warrior->clone();
		if (tmp->next != nullptr)
		{
			tmp = tmp->next;
			tmp2->next = new struct s_warriors;
			tmp2 = tmp2->next;
			tmp2->next = nullptr;
		}
	}
	return (*this);
}

Squad::~Squad(){
	struct s_warriors *tmp;
	for (int i = 0; i < counts_warriors; ++i)
	{
		tmp = head;
		head = head->next;
		delete tmp->warrior;
		delete tmp;
	}
}
