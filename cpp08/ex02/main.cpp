#include "mutantstack.cpp"
#include "mutantstack.hpp"

int main(void) {
	std::cout << "<----------Standart Test---------->" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);

	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " | ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "<----------My Test Reverse---------->" << std::endl;

	MutantStack<int>::reverse_iterator it1 = mstack.reverseBegin();
	MutantStack<int>::reverse_iterator it2 = mstack.reverseEnd();
	while (it1 != it2)
	{
		std::cout << *it1 << " | ";
		++it1;
	}
	std::cout << std::endl;

	std::cout << "<----------My Test List---------->" << std::endl;

	std::list<int> a(2, 4);
	std::list<int> b(2, 5);
	MutantStack< std::list<int> > mstack1;

	mstack1.push(a);
	mstack1.push(b);

	MutantStack<std::list<int> >::iterator it3 = mstack1.begin();
	MutantStack<std::list<int> >::iterator it4 = mstack1.end();
	while (it3 != it4)
	{
		std::cout << *it3->begin() << " | ";
		++it3;
	}
	std::cout << std::endl;
	return (0);
}

