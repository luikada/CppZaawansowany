// zad 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void swap (int& var1, int& var2)
{
	int temp = var1;
	var1 = var2;
	var2 = temp;
}
int main()
{
	int a = 1111;
	int b = 321;
	std::cout << "a=" << a << "; b=" << b <<  std::endl; //wyswietlenie nadania wartosci a i b
	swap(a, b); //wykonienie funkcji ktora nie zwaraca nic do maina 
	std::cout << "a=" << a << "; b=" << b << std::endl; //mimo ze funklcja nic nie zwraca wartosci zostaly zmienione


}