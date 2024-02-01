#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	std::string type;

public:
	Dog();
	Dog(const Dog& dog);
	Dog& operator= (const Dog& dog);
	~Dog();

	void makeSound() const;
	std::string getType() const;

};

#endif