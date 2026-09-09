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
	~Animal(void);

	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
