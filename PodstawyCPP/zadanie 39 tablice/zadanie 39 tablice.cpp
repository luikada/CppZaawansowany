// Utwórz tablicę 10 liczb całkowitych. Wczytaj od użytkownika jej
//zawartość, a następnie wypisz jej elementy :
//● od początku
//● od końca
// co drugi


#include <iostream>

int main()

{
    const int size = 10;
    int tab[size]={};

    for (int i = 0; i <size; i++)
    {
        std::cin >> tab[ i ];
    }
    std::cout << std::endl << std::endl;
    
    for (int i = (size - 1); i >= 0; i--)
    {
        std::cout << tab[i];

    }
    std::cout << std::endl << std::endl;


    for (int i = 0; i < size; i++)
    {
        std::cout<< tab[i] << " ";
    }
    std::cout << std::endl << std::endl;



    for (int i = 0; i < size; i+=2)
    {
        std::cout << tab[i];
    }
    std::cout << std::endl << std::endl;

   




}