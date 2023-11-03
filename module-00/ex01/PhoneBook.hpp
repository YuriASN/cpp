
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
# include <stdlib.h>
# include "Contacts.hpp"
# include "set_data.hpp"

# define CRESET "\e[0m"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

class PhoneBook
{
private:
	int		last_contact;
	Contacts	contact[8];

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	search_contact(void);
	void	print_all(void);
	void	print_one(int index);
	void	next_contact(void);
	void	add_contact(void);
};

#endif