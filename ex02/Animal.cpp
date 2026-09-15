#include "Animal.hpp"

Animal::Animal(void) : m_type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->m_type = obj.m_type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->m_type);
}
