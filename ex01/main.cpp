#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void)
{
	Animal *animals[10];
	std::cout << "\n CREATE ANIMALS \n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n DELETE ANIMALS \n" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "\n CHECK FOR SHALLOW COPIES --DOG--\n" << std::endl;
	Dog d1;
	Dog d2 = d1;
	std::cout << "Dog 1: " << std::flush;
	d1.checkBrain();
	std::cout << "Dog 2: " << std::flush;
	d2.checkBrain();

	std::cout << "\n CHECK FOR SHALLOW COPIES --CAT--\n" << std::endl;
	Cat c1;
	Cat c2 = c1;
	std::cout << "Cat 1: " << std::flush;
	c1.checkBrain();
	std::cout << "Cat 2: " << std::flush;
	c2.checkBrain();

	std::cout << "\n CHECK '=' OPERATOR --CAT--\n" << std::endl;
	Cat c3;
	c3 = c1;
	std::cout << "Cat 1: " << std::flush;
	c1.checkBrain();
	std::cout << "Cat 3: " << std::flush;
	c3.checkBrain();

	std::cout << "\n END \n" << std::endl;

	return (0);
}
