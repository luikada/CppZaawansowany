//Wczytaj od u�ytkownika liczb� ca�kowit�, a nast�pnie
//wypisz jej warto�� bezwzgl�dn� na konsol�.Uwaga!Nie
//zmieniaj warto�ci zmiennej wczytanej od u�ytkownika.

#include <iostream>

int main()
{
    int a = 0;

    std::cout << "podaj liczbe calkowita"<<std::endl;
    std::cin >> a;

   // std::cout << "wartosc bezwzgledna: " << abs(a) << std::endl;

    if (a>0)
    {

        std::cout << "wartosc bezwzgledna " << a << std::endl;
    }
    else
    {
        std::cout << "wartosc bezwzgledna " << -a << std::endl;

    }
    
}

