#ifndef TEDDY_HPP
# define TEDDY_HPP

# include <iostream>
# include "Object.hpp"
# include "Toy.hpp"

class Teddy : public Toy 
{
public:
	Teddy(std::string const& name = TEDDY_NAME) : Toy(name, TEDDY_NAME) {};
	virtual void isTaken()
	{
		std::cout << "gra hu" << std::endl;
	};
};

#endif
