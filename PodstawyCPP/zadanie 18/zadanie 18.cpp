// zadanie 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    
    std::cout << "podaj dwie liczby calkowite"<< std::endl;
    std::cin >> a;
    std::cin >> b;

    if (a > b)
        std::cout<< "wieksza jest pierwsza liczba czyli: " << a << std::endl;

    else
        std::cout <<"wieksza jest druga liczba czyli: " << b << std::endl;


}

                                                                                                                                                             