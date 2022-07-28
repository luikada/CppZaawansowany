// Napisz program który wczyta od u¿ytkownika jego wiek i nastêpnie sprawdzi czy mo¿e graæ w grê planszow¹
// (gra jest przewidziana od 4 do 104 lat).

#include <iostream>

int main()
{
    unsigned short wiek = 0;


    std::cout << "Hello Podaj ile masz lat:" << std::endl;
    std::cin >> wiek;


    //if ( 4 <= wiek <= 104 )  tak nie rob bo sprawdzi najpierw ze jest wieksze od 4 i porowna "ze jest wieksze od 4" a nie age 
                             // wiec musi byc z &&

    if ((wiek >= 4) && (wiek <= 104))
    {
        std::cout << "mozesz zagaræ w gre" << std::endl;
    }
    else
    {
        std::cout << "nie mozesz zagrac w gre" << std::endl;

    }
}
