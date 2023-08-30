#include <Contacts.hpp>
#include <PhoneBook.hpp>

Contacts::Contacts(void)
{
	std::cout << "Constructor of Contacts called" << std::endl;
	return;
}

Contacts::~Contacts()
{
	std::cout << "Destructor of Contacts called" << std::endl;
	return;
}

/* Return true if the string has only white spaces. */
static bool	only_spaces(std::string str) {
	int	i = -1;
	while (str.at(++i)) {
		if (!isspace(str.at(i)))
			return false;
	}
	return true;
}

bool	Contacts::set_first_name(std::string input)
{
	if (input.empty() || only_spaces(input))
		return false;
	this->first_name = input;
	return true;
}

std::string	Contacts::get_first_name()
{
	return(this->first_name);
}

bool	Contacts::set_last_name(std::string input)
{
	if (input.empty() || only_spaces(input))
		return false;
	this->last_name = input;
	return true;
}

std::string	Contacts::get_last_name()
{
	return(this->last_name);
}

bool	Contacts::set_secret(std::string input)
{
	if (input.empty() || only_spaces(input))
		return false;
	this->secret = input;
	return true;
}

std::string	Contacts::get_secret()
{
	return(this->secret);
}

/* Set the number from user's input but only if string only contains digits or a "+" in the begginging.
return FALSE if input is wrong.*/
bool	Contacts::set_number(std::string input)
{
	int	i = 0;

	if (input.size() < 4 || !input.at(i) == '+' || !isdigit(input.at(i)))
		return false;
	while (++i < input.size())
	{
		if (!isdigit(input.at(i)))
			return false;
	}
	this->phone_nbr = input;
	return true;
}

std::string	Contacts::get_nbr()
{
	return(this->phone_nbr);
}
