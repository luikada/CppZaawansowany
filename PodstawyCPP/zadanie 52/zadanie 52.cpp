// Napisz program kt�ry wczyta od u�ytkownika 5 imion, a
//nast�pnie wypisze najd�u�sze z nich.

#include <iostream>
#include <string>

int main()
{
    
    const int size = 5;
    std::string name[size];

    for (int i = 0; i < size; i++) 
    {
        std::cout << "Podaj imie i nazwisko " << i << " ";
        std::getline(std::cin >> std::ws, name[i]);
    }



        int idx = 0;

        for (int i = 1; i < size; i++)
        {
            if (names[idx].lenght() < names [i].lenght())
            {
                idx = 1;
            }

        }
    std::cout << "najdluzsze imie to "


}

