// Technologie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>//dyretywa preprocesora podmienia nam cala zawsartosc 
//pliko iostream 
#define SDA 4  //makro sda

int main()
{
#ifdef SDA
    std::cout << "Hello World!\n"<<SDA<<std::endl;
#endif

    //powyzej wykona sie jest SDA jest zdefiniowane jesli nie to nie 
    //wyswietli sie

}
