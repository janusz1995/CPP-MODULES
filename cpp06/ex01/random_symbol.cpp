#include "data.h"

char	random_symbol(void) {
	char sym;
	std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	sym = alphabet[rand() % 52];
	return (sym);
}
