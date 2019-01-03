// B-CPP-300_rush2.cpp : First test
//

#include "pch.h"
#include <iostream>
#include "LittlePony.hpp"
#include "Teddy.hpp"

Object **MyUnitTests();

int	main(void)
{
	// Test output
	LittlePony obj1;
	Teddy obj2;
	Object **objArray = MyUnitTests();

	std::cout << "LittlePony is called: " << objArray[0]->getName() << std::endl;
	obj1.isTaken();
	std::cout << "Teddy is called: " << objArray[1]->getName() << std::endl;
	obj2.isTaken();

	return 0;
}

Object **MyUnitTests()
{
	Object **a = new Object*[2];

	a[0] = new LittlePony("happy pony");
	a[1] = new Teddy("cuddles");
	return a;
}