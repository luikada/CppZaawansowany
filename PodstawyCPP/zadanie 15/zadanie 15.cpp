// zadanie 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;


    std::cout << "podaj dlugosci 3 bokow prostokata " << std::endl;

    std::cout << "podaj 1 bok " << std::endl;
    std::cin >> a;
    std::cout << "podaj 2 bok" << std::endl;
    std::cin >> b;
    std::cout << "podaj 3 bok" << std::endl;
    std::cin >> c;
    

    bool p1 = (a + b > c);
    bool p2 = (a + c > b);
    bool p3 = (c + b > a);

    bool trojkat_ok = p1 && p2 && p3;

    std::cout << "czy mozna utworzyc trojkat?" << std::boolalpha << trojkat_ok<< std::endl;



}

