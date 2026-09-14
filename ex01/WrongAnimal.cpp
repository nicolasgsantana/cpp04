#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : m_type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout <<"WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->m_type = obj.m_type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->m_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << this->m_type << " says: wrong sound" << std::endl;
}
