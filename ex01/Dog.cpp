#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->m_type = "Dog";
	this->m_brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		Animal::operator=(obj);
		this->m_brain = obj.m_brain;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->m_brain;
}

void Dog::makeSound(void) const
{
	std::cout << this ->m_type << " says: Woof woof" << std::endl;
}

void Dog::checkBrain(void) const
{
	std::cout << "brain address: " << &this->m_brain << std::endl;
}
