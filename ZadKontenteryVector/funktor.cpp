#include <iostream>

struct HelloWorld
{
    void operator()(/*Inset args here*/)
    {
        std::cout << "Hello World!\n";
    }
};


int main()
{
    HelloWorld(); // nic nie wo³a siê bo jest to c-tor domyslny
    HelloWorld hello;
    hello();

}