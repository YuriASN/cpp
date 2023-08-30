#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>

class Contacts
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	secret;
	std::string	phone_nbr;

public:
	bool		set_first_name(std::string input);
	std::string	get_first_name();
	bool		set_last_name(std::string input);
	std::string	get_last_name();
	bool		set_secret(std::string input);
	std::string	get_secret();
	bool		set_number(std::string input);
	std::string	get_nbr();
	
	Contacts(void);
	~Contacts();
};

#endif