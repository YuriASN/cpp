#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	std::string type;

public:
	WrongCat();
	WrongCat(const WrongCat& cat);
	WrongCat& operator= (const WrongCat& cat);
	~WrongCat();

	void makeSound() const;
	std::string getType() const;

};

#endif