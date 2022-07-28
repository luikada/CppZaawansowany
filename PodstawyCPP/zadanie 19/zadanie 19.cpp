//Wczytaj od u¿ytkownika liczbê ca³kowit¹, a nastêpnie
//wypisz jej wartoœæ bezwzglêdn¹ na konsolê.Uwaga!Nie
//zmieniaj wartoœci zmiennej wczytanej od u¿ytkownika.

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

