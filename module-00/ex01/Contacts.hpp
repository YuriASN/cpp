#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <cstdlib>
# include <stdlib.h>
# include <cstring>
# include <cwchar>

class Contacts
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	secret;
	std::string	phone_nbr;
	bool		saved;

public:
	void	print_short();
	void	print_full();
	bool	is_saved();
	void	create(std::string first_n, std::string last_n, std::string nick, std::string nbr, std::string scrt);
	void	clean_contact();

	Contacts(void);
	~Contacts();
};

#endif