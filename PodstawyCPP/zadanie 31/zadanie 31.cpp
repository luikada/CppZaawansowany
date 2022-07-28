//Wypisuj echo znaku wczytanego od u¿ytkownika dopóki nie
//wprowadzi on znaku “q” lub “Q”.



#include <iostream>

void EchoWhile()
{

    char u = '0';

    std::cout << "podaj znak" << std::endl;

    while (u != 'q')
    {
        std::cin >> u;
        std::cout << u << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;
    }
}


    void EchoDoWhile()
    {

        char u = '0';

        std::cout << "podaj znak" << std::endl;

        do
        {
            std::cin >> u;
            std::cout << u << std::endl;


        } while (u != 'q');
    }


int main()
{
 
    EchoWhile();
    EchoDoWhile();


}







// int i = 1;


// do
// {
//     cout << i << " ";
//    ++i;
// } while (i <= 5);
//
//
// while (i <= 5)
// {
//    cout << i << " ";
//    ++i;
// }