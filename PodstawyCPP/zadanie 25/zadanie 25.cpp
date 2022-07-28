

#include <iostream>
double Pole ( double a,  double b)
{
    double wynik = a * b;

    return wynik;
}
double Obwod( double a,  double b)
{
    double wynik = 2* (a + b);

    return wynik;
}

int main()
{
    double dl_a = 0;
    double dl_b = 0;

       std::cout << "podaj bok a: "<< std::endl;
        std::cin >> dl_a ;
        std::cout << "podaj bok b: "<< std::endl;
        std::cin >> dl_b;

        std::cout << "pole prostokata: " << Pole(dl_a, dl_b) << std::endl << std::endl;
        std::cout << "obwod prostokata: " << Obwod(dl_a, dl_b) << std::endl;


   std::cout << "pole prostokata z liczb 3 i 4: " << Pole (3, 4) << std::endl;
   std::cout << "obwod prostokata z liczb 3 i 4: " << Obwod(3, 4) << std::endl;

    //double l = 0;
    //double l2 = 0;
    //std::cout << "pododaj dwie dlugosci bokow"<<std::endl;
    //std::cin >> l;
    //std::cin >> l2;

    

}
