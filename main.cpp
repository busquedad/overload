#include <iostream>
#include "./include/Greeter.h"
//#include <Greeter.h>

int main()
{
    //std::cout << "Hello World!" << std::endl;

    Greeter* greeter = new Greeter();

    greeter->greet();
    //greeter->greet("Hello");
    //greeter->greet(Greeting* greeting);

    delete greeter;

    std::cin.ignore();
    std::cin.get();

    return 0;
}