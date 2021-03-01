#ifndef DATA_H
# define DATA_H
# include <iostream>
# include <ctime>

typedef struct s_data {
	std::string s1;
	int			n;
	std::string s2;
}				Data;

void*	serialize(void);
Data*	deserialize(void* raw);
char	random_symbol(void);

#endif