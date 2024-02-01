#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
std::cout << std::endl;
	Dog ouf;
std::cout << std::endl;
	const Animal* copy = j;
	copy->makeSound();
	copy = j;
	copy->makeSound();
std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
std::cout << std::endl;
	return 0;
}