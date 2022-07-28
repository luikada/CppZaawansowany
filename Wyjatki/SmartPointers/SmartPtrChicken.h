#pragma once
#include <iostream>
#include <memory>

class SmartPtrChiken
{
	SmartPtrChiken()
	{
		std::cout << "Chicken" << std::endl;
	}
	~SmartPtrChiken()
	{
		std::cout << "~Chicken" << std::endl;
	}


};
