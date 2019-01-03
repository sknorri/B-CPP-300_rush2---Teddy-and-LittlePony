#ifndef OBJECT_HPP
# define OBJECT_HPP

# define PONY_NAME "LittlePony"
# define TEDDY_NAME "Teddy"

#include <iostream>
#include <string>

class Object 
{
private:
	std::string const _name;
	std::string const _type;

public:
	Object(std::string const& name, std::string const& type) :
		_name(name),
		_type(type)
	{};
	std::string const& getName() const
	{
		return _name;
	}
};

#endif