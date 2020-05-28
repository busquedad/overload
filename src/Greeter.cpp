#include "../include/Greeter.h"
//#include <Greeter.h>

Greeter::Greeter()
{
	std::cout << "Build!" << std::endl;
}

Greeter::~Greeter()
{
	std::cout << "Destroy!" << std::endl;
}

void Greeter::greet()
{
	std::cout << "Hello!" << std::endl;
}

