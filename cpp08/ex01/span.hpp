#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <vector>
# include <iostream>
# include <list>

class Span {
public:
    Span(unsigned int n);
    Span(Span const &span);
    Span& operator=(Span const &span);
    virtual ~Span();

	template<typename T>
	void addNumber(T begin, T end) {
		if (arr.size() + std::distance(begin, end) > max_len) {
			throw Span::dontHaveSpace();
		}
		arr.assign(begin, end);
	}
	unsigned int		getMaxLen();
    void	addNumber(int n);
    int		shortestSpan();
    int		longestSpan();
    class arrayIsFull : public std::exception {
		const char* what() const throw();
    };
	class arrayIsLittle : public std::exception {
		const char* what() const throw();
	};
	class dontHaveSpace : public std::exception {
		const char* what() const throw();
	};
private:
    std::vector<int>	arr;
    unsigned int		max_len;
};

#endif
