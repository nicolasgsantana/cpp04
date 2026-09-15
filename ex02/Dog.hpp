#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *m_brain;
public:
	Dog(void);
	Dog(const Dog &obj);
	Dog &operator=(const Dog & obj);
	~Dog(void);

	void makeSound(void) const;
	void checkBrain(void) const;
};

#endif
