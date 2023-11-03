#include "Contacts.hpp"
#include "PhoneBook.hpp"

/* Return bool if string is all white spaces */
static bool all_whitespaces(std::string str)
{
	for (int i = 0; str[i]; i++)
		if (!isspace(str[i]))
			return (false);
	return (true);
}

static std::string	get_f_name(void)
{
	std::string	f_name;

	while (f_name.empty() == true || all_whitespaces(f_name))
	{
		std::cout << "First name:     ";
		std::getline(std::cin, f_name);
		if (f_name.empty() == true)
			std::cout << "Invalid first name!" << std::endl;
	}
	return (f_name);
}

static std::string	get_l_name(void)
{
	std::string	l_name;

	while (l_name.empty() == true || all_whitespaces(l_name))
	{
		std::cout << "Last name:      ";
		std::getline(std::cin, l_name);
		if (l_name.empty() == true)
			std::cout << "Invalid last name!" << std::endl;
	}
	return (l_name);
}

static std::string	get_nick(void)
{
	std::string	nick;

	while (nick.empty() == true || all_whitespaces(nick))
	{
		std::cout << "Nickname:       ";
		std::getline(std::cin, nick);
		if (nick.empty() == true)
			std::cout << "Invalid nickname!" << std::endl;
	}
	return (nick);
}

static void	remove_whitespace(std::string &str)
{
	for (int i = 0; str[i]; i++)
		if (isspace(str[i]))
			str.erase(i, 1);
}

/* Checks if string is only numbers or has a + on index 0 */
static bool	valid_number(std::string nbr)
{
	for (int i = 0; nbr[i]; i++)
	{
		if (i == 0 && nbr[0] == '+')
			continue ;
		if (nbr[i] < '0' || nbr[i] > '9')
			return (false);
	}
	return (true);
}

static std::string	get_nbr(void)
{
	std::string	nbr;

	while (nbr.empty() == true || !valid_number(nbr))
	{
		std::cout << "Phone number:   ";
		std::getline(std::cin, nbr);
		remove_whitespace(nbr);
		if (nbr.empty() == true || !valid_number(nbr))		//fix is all number
			std::cout << "Invalid phone number!" << std::endl;
	}
	return (nbr);
}

static std::string	get_secret(void)
{
	std::string	secret;

	while (secret.empty() == true || all_whitespaces(secret))
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, secret);
		if (secret.empty() == true)
			std::cout << "Invalid secret!" << std::endl;
	}
	return (secret);
}

void	set_data(Contacts *c)
{
	std::string	f_name, l_name, nick, secret, nbr;

	f_name = get_f_name();
	l_name = get_l_name();
	nick = get_nick();
	nbr = get_nbr();
	secret = get_secret();
	c->create(f_name, l_name, nick, nbr, secret);
}