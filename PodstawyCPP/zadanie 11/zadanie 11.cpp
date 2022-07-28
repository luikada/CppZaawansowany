// zadanie 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";


    double a = 0.0;

    std::cout << "podaj liczbe : ";
    std::cin >> a; 


    std::cout << "wynik dodania 10: " << (a += 10);

    a *= 24; //tak czytelniej lepiej
    std::cout << "wynik mnozenia 24: " << a;

    std::cout << "wynik odjecia 100: " << (a -= 100);

    a /= 2;
    std::cout << "wynik dzielenia przez 2: " << a;


}

