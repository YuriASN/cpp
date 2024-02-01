#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	std::string type;
	Brain* cerebro;

public:
	Cat();
	Cat(const Cat& cat);
	Cat& operator= (const Cat& cat);
	~Cat();

	void makeSound() const;
	std::string getType() const;

};

#endif