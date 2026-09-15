#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *m_brain;
public:
	Cat(void);
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	~Cat(void);

	void makeSound(void) const;
	void checkBrain(void) const;
};

#endif
