#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string	m_type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal &operator=(const WrongAnimal &obj);
	virtual ~WrongAnimal(void);

	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
