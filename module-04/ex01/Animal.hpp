#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
private:
	std::string type;

public:
	Animal();
	Animal(const Animal& anim);
	Animal& operator= (const Animal& anim);
	virtual ~Animal();

	virtual void makeSound() const;
	virtual std::string getType() const;

};

#endif