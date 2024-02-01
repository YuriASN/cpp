#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
private:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& anim);
	WrongAnimal& operator= (const WrongAnimal& anim);
	virtual ~WrongAnimal();

	virtual void makeSound() const;
	virtual std::string getType() const;

};

#endif