

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "wpisz liczbe calkowita " << std::endl;
    int liczba = 0;
    std::cin >> liczba;
    std::cout << "wczytana liczbe calkowita: " << liczba << std::endl << std::endl;


    std::cout << "wpisz ulamek (z kropka miedzy cyframi): " << std::endl;
    float ulamek = 0.0000;
    std::cin >> ulamek;
    std::cout << "wczytana ulamek: " << ulamek << std::endl << std::endl;

    std::cout << "wpisz znak: " << std::endl;
    char znak = 0;
    std::cin >> znak;
    std::cout << "znak wpisany to: " << znak << std::endl << std::endl;


    std::cout << "wpisz 0 albo 1: " << std::endl;
    bool logiczna = false;
    std::cin >> logiczna;
    std::cout << "wpisana wartosc: " << logiczna << std::endl << std::endl;

    //Napisz program, który wczytuje ze standardowego wejœcia trzy liczby ca³kowite, a nastêpnie wypisuje je w oddzielnych liniach na standardowym wyjœciu.

    std::cout << "podaj trzy liczby calkowite" << std::endl;
        int liczba1 = 0;
        int liczba2 = 0;
        int liczba3 = 0;

        std::cin >> liczba1;
        std::cin >> liczba2;
        std::cin >> liczba3;

        std::cout << "podane liczby to: "
        <<liczba1 <<"," << std::endl
        <<liczba2 << "," << std::endl
        <<liczba3 << std::endl;


  


   









}
