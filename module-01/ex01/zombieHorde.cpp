#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*dead = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		dead[i].setname(name);
	}
	return (dead);
}
