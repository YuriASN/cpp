#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "From subject!" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << "more as asked on subject" << std::endl;	
		Animal* anim[10];
		for (int i = 0; i < 10; ++i)	{
			std::cout << i << " ";
			if (i % 2)
				anim[i] = new Dog();
			else
				anim[i] = new Cat();
		}
	std::cout << std::endl;
		Animal* cp(anim[1]);
		std::cout << "Type of cpy is " << cp->getType() << std::endl;
		cp->makeSound();
		cp = anim[0];
		std::cout << "Type of cpy is " << cp->getType() << std::endl;
		cp->makeSound();
	std::cout << std::endl;
		for (int i = 0; i < 10; ++i)	{
			std::cout << i << " ";
			delete anim[i];
		}
	}
	return 0;
}