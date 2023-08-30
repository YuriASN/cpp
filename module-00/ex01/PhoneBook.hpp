
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class PhoneBook
{
public:
	int	last_contact;
	PhoneBook(void);
	~PhoneBook(void);

	Contacts	contact[9];
};

#endif