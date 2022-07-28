//Stwórz funkcjê która przyjmie 4 argumenty:
//-liczbê ca³kowit¹
//- tekst do wypisania w przypadku gdy liczba jest z przedzia³u
//1 - 1000
//- tekst do wypisania je¿eli liczba jest podzielna przez 4
//- tekst do wypisania je¿eli liczba jest ujemna

#include <iostream>

void fun(int num, char lessThen1000[], char div4[], char minus[])
{
    if (num >= 1 && num <= 1000)
    {
        std::cout << lessThen1000 << std::endl;

    }

    if ((num % 4) == 0)
    {
        std::cout << div4 << std::endl;

    }

    if (num < 0)

    {
        std::cout << minus << std::endl;

    }

}
    
    int main()
    {
        char tysiak[] = "liczba z przedzialu 1 do 1000"; 
        char cztery[] = "liczba podzielna przez 4";
        char mniej0 [] = "liczba ujemna";

        int num = 0;
        std::cout << "podaj liczbe";
        std::cin >> num;
        fun(num, tysiak, cztery, mniej0);


    }
