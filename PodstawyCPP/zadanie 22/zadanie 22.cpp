// Wczytaj od u¿ytkownika 3 liczby ca³kowite i wypisz
//najwiêksza z nich.

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;


    std::cout << "podaj trzy liczby calkowite" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;


    if (a > b && a > c)

    {
        std::cout << "najwieksza jest pierwsza liczba czyli: " << a << std::endl;
    }
    if ( b > c && b > a)
        {
            std::cout << "najwieksza jest druga liczba czyli: " << b << std::endl;
        }
    else if (b > c)
            std::cout << "najwieksza jest trzecia liczba czyli: " << c << std::endl;
    
    else
        std::cout << "nie ma liczby najwiekszej " << std::endl;
}
