//Napisz program, który wczyta od u¿ytkownika 3 nazwy
//kolorów i 3 nazwy zwierz¹t, wypisz wszystkie mo¿liwoœci
//kombinacji ich po³¹czeñ.
// 
// po tym napisz FUNKCJE std::string polaczStringi(std::string str1, std::string str2, char znak), ktory polaczy dwa stringi 




    //for (int i = 0; i < size; ++i)    ---- to sie robi 9 raazy a nie 3!!!!!
    //{
    //   
    //    for (int k = 0; k < size; ++k)
    //    {
    //        std::cout << "podaj kolor" << std::endl;
    //        std::cin >> animal_colors[i][k];
    //        std::cout << "podaj zwierze" << std::endl;
    //        std::cin >> animal_colors[i][k];
    //    }
    //}
#include <iostream>
#include <string>

int main()
{
    const int size = 3;

    std::string animal [size] = {};
    std::string color [size] = {};










    for (int a = 0; a < size; ++a)
    {
        for (int b = 0; b < size; ++b)
        {
            std::cout << animal_colors[a][b];
        }
    }

}