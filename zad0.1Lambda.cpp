//Zad 0.1 Lambda
//Napisz zwyk³¹ funkcj¹ oraz lambdê(przypisz j¹ do zmiennej) Nastêpnie je wywo³aj :
//a) funkcj¹ wypisuj¹ca “Hello World”
//b) Funkcja dodaj¹ca dwie liczby do siebie(i zwracaj¹ca j¹)
#include <iostream>
#include <algorithm>

void fun()
{
	std::cout << "Hello World" << std::endl;
}

double adding(double a, double b)
{
	return a+b;
}

int main()
{
	fun();

	auto danceLambada = []() {std::cout << "Hello World tanczymy lambade" << std::endl;	};
	danceLambada();


	std::cout << adding(1.1, 3) << std::endl;
	auto lambadaIsAdding = [](double x, double y) {return x + y;};

	std::cout << "lambada added and the sum is: " << lambadaIsAdding(5, 4);
}