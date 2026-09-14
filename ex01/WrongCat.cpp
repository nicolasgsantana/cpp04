#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->m_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		WrongAnimal::operator=(obj);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->m_type << " says: Meow" << std::endl;
}
