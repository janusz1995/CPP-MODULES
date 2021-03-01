#include "phonebook.h"

int			main()
{
	int			done_contacts;
	std::string	str_input;
	Contact		contacts[8];

	done_contacts = 0;
	while (21)
	{
		show_message("You should accept the ADD command, the SEARCH command or the EXIT command:");
		std::cin >> str_input;

		if (str_input == "EXIT")
			break ;
		else if (str_input == "SEARCH")
		{
			show_contacts(contacts, done_contacts);
		}
		else if (done_contacts == 8)
		{
			show_message("PhoneBook is full :(");
		}
		else if (str_input == "ADD")
		{
			fill_contact(contacts[done_contacts]);
			done_contacts++;
		}
		else
			show_message("Incorrect command :/");
	}
	return (0);
}
