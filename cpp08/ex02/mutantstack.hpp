#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <list>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack();
	MutantStack(MutantStack const &mutantStack);
	MutantStack<T>& operator=(MutantStack const &mutantStack);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator end(void);
	iterator begin(void);
	const_iterator end(void) const;
	const_iterator begin(void) const;
	reverse_iterator reverseEnd(void);
	reverse_iterator reverseBegin(void);
	const_reverse_iterator reverseEnd(void) const;
	const_reverse_iterator reverseBegin(void) const;
};

#endif