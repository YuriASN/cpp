#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define CRESET "\e[0m"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

class Zombie
{
private:
	std::string	name;

public:
	void	announce(void);

	Zombie	(std::string name);
	~Zombie	(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif