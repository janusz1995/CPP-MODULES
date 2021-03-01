#include "phonebook.h"

void		show_message(std::string str)
{
	std::cout << str << std::endl;
}

void		show_field(std::string field, std::string str)
{
	std::cout << field << str << std::endl;
}

void		show_fields(Contact &contact)
{
	show_field("First name: ", contact.get_first_name());
	show_field("Last name: ", contact.get_last_name());
	show_field("Nickname: ", contact.get_nickname());
	show_field("Login: ", contact.get_login());
	show_field("Postal address: ", contact.get_zip_code());
	show_field("Email address: ", contact.get_email());
	show_field("Phone number: ", contact.get_phone_number());
	show_field("Birthday date: ", contact.get_birthday_date());
	show_field("Favorite meal: ", contact.get_favorite_meal());
	show_field("Underwear color: ", contact.get_underwear_color());
	show_field("Darkest secret: ", contact.get_darkest_secret());
}

void		show_info_align(std::string str)
{
	if (str.length() > 10)
	{
		str.erase(9);
		std::cout << str << ".";
	}
	else
	{
		std::cout << std::setw(10) << str;
	}
	std::cout << "|";
}

void		show_contacts(Contact *contacts, int counts_contacts)
{
	int	i;

	i = 0;
	if (counts_contacts > 0)
	{
		while (i < counts_contacts)
		{
			std::cout << std::setw(10) << i + 1 << "|";
			show_info_align(contacts[i].get_first_name());
			show_info_align(contacts[i].get_last_name());
			show_info_align(contacts[i].get_nickname());
			std::cout << std::endl;
			i++;
		}
		std::cout << "Enter index contact:" << std::endl;
		std::cin >> i;
		if (i < 1 || i > 8 || i > counts_contacts)
			show_message("Incorrect index, what are you doing?!");
		else
			show_fields(contacts[i - 1]);
	}
	else
		std::cout << "PhoneBook is void :(" << std::endl;
}
