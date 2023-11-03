#include "utils.hpp"

int	main(void)
{
	Zombie *dead;

	dead = newZombie("Pointer");
	randomChump("Stack");
	dead->announce();
	delete dead;
	return (0);
}