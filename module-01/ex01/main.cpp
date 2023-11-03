#include "Zombie.hpp"

int	main(void)
{
	Zombie	*deads;
	int 	N = 5;

	deads = zombieHorde(N, "Mull");
	for (int i = 0; i < N; i++)
		deads[i].announce();
	delete[] deads;
	return (0);
}