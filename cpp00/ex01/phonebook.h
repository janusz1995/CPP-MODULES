#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include "contacts.hpp"
# include <iomanip>

void		fill_contact(Contact &contact);
void		show_message(std::string str);
void		show_contacts(Contact *contacts, int counts_contacts);

#endif
