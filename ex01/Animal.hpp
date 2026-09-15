#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	m_type;

public:
	Animal(void);
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	virtual ~Animal(void);

	std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual void checkBrain(void) const;
};

#endif
