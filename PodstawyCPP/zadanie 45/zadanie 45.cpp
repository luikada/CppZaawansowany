//Napisz program, który w tablicy znaków zamieni wszystkie małe litery na DUŻE LITERY.
//Inne znaki nie powinny być modyfikowane.
// Następnie wypisz tą tablicę.
//A - 65
//Z - 90
//a - 97
//z - 122
//z ascii roznica miedzy a i A jest 32


#include <iostream>


int main()
{
    char literki[] = "AlA ma kota A kot ma Ale ^&*@, a co to za DziWne Znaki??";

    for (int i = 0; literki[i] != 0; i++)
        {
            //if (literki[i] >= 97 && literki[i] <= 122)
            if (literki[i] >= 'a' && literki[i] <= 'z')
            {
                literki[i] -= 32;
            }
            else if (literki[i] >= 'A' && literki[i] <= 'Z')
            {
                literki[i] += 32;
            }
        }
    ​
        std::cout << literki;
    ​
        //char tab[] = "abC";
        ​
        //if (tab[0] >= 'a' && tab[0] <= 'z')
        //{
        //    std::cout << "Mala litera" << std::endl;
        //}
        //else
        //{
        //    std::cout << "Nie mala litera" << std::endl;
        //}
        ​
        //tab[0] = tab[0] - 32;
        //tab[1] -= 32;
        ​
        //std::cout << tab;
}