//Napisz program który bêdzie sumowa³ dodatnie liczby podawane od u¿ytkownika.
//W przypadku napotkania liczby ujemnej, niech zakonczy dzia³ania i wypisze t¹ wartoœæ.

#include <iostream>




int main()
{
    int a = 0;
    int b = 0;
    std::cout <<"podaj liczbe:" << std::endl;
    std::cin >> a;

      
    if (a >= 0)
    {
        std::cout << "podaj liczbe:" << std::endl;
        std::cin >> b;

        while (b < 0)
        {
            break;
            std::cout << b;

        }

        while (b >= 0)
        {
                std::cout << "suma to: " << (a += b) << std::endl;
                std::cout << "podaj liczbe:" << std::endl;
                std::cin >> b;

        }

    }
    else 
    {
        std::cout << a;
    }
}