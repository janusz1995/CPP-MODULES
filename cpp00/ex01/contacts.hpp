#include "phonebook.h"

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string zip_code;
	std::string email;
	std::string	phone_number;
	std::string	birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
public:
	std::string get_first_name()
	{
		return (first_name);
	}
	std::string get_last_name()
	{
		return (last_name);
	}
	std::string get_nickname()
	{
		return (nickname);
	}
	std::string get_login()
	{
		return (login);
	}
	std::string get_zip_code()
	{
		return (zip_code);
	}
	std::string get_email()
	{
		return (email);
	}
	std::string get_phone_number()
	{
		return (phone_number);
	}
	std::string get_birthday_date()
	{
		return (birthday_date);
	}
	std::string get_favorite_meal()
	{
		return (favorite_meal);
	}
	std::string get_underwear_color()
	{
		return (underwear_color);
	}
	std::string get_darkest_secret()
	{
		return (darkest_secret);
	}
	void	set_first_name(std::string first_name)
	{
		this->first_name = first_name;
	}
	void	set_last_name(std::string last_name)
	{
		this->last_name = last_name;
	}
	void	set_nickname(std::string nickname)
	{
		this->nickname = nickname;
	}
	void	set_login(std::string login)
	{
		this->login = login;
	}
	void	set_zip_code(std::string zip_code)
	{
		this->zip_code = zip_code;
	}
	void	set_email(std::string email)
	{
		this->email = email;
	}
	void	set_phone_number(std::string phone_number)
	{
		this->phone_number = phone_number;
	}
	void	set_birthday_date(std::string birthday_date)
	{
		this->birthday_date = birthday_date;
	}
	void	set_favorite_meal(std::string favorite_meal)
	{
		this->favorite_meal = favorite_meal;
	}
	void	set_underwear_color(std::string underwear_color)
	{
		this->underwear_color = underwear_color;
	}
	void	set_darkest_secret(std::string darkest_secret)
	{
		this->darkest_secret = darkest_secret;
	}
};
