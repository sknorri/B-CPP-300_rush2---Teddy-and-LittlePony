#ifndef LITTLEPONY_HPP
#define LITTLEPONY_HPP

# include <iostream>
# include "Object.hpp"
# include "Toy.hpp"

class LittlePony : public Toy {
public:
	LittlePony(std::string const& name = PONY_NAME) : Toy(name, PONY_NAME) {};
	virtual void isTaken()
	{
		std::cout << "yo man" << std::endl;
	};
};

#endif
