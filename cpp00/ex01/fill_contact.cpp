#include "phonebook.h"

std::string	get_info(std::string write_str)
{
	std::string	str_input;

	std::cout << write_str << std::endl;
	std::cin >> str_input;
	return (str_input);
}

void		fill_contact(Contact &contact)
{
	contact.set_first_name(get_info("First name: "));
	contact.set_last_name(get_info("Last name: "));
	contact.set_nickname(get_info("Nickname: "));
	contact.set_login(get_info("Login: "));
	contact.set_zip_code(get_info("Postal address: "));
	contact.set_email(get_info("Email address: "));
	contact.set_phone_number(get_info("Phone number: "));
	contact.set_birthday_date(get_info("Birthday date: "));
	contact.set_favorite_meal(get_info("Favorite meal: "));
	contact.set_underwear_color(get_info("Underwear color: "));
	contact.set_darkest_secret(get_info("Darkest secret: "));
}
