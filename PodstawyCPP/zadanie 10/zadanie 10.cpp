#include <iostream>
#include <cmath>

int main()
{
    //wstep
    double x = 10.2020;

   std::cout << "wartosc bezwzgledna" << abs(x)<< std::endl; 
   std::cout << "pierwiastek" << sqrt(x) << std::endl;
   std::cout << "potega do kwadratu" << pow(x,2) << std::endl;
   std::cout << "potega do szczesciany" << pow(x,3) << std::endl << std::endl;

   //zadanie 10

    double a = 0.0f;
    double b = 0.0;
   
    std::cout << "podaj dlugości 1 boku ";
    std::cin >> a ;
    std::cout << "podaj dlugości 2 boku ";
    std::cin >> b ;


    
    double ap = pow(a, 2);
    double bp = b*b;

    double c = sqrt(ap + bp);

    std::cout << "przeciwprostokatna to: " << c << std::endl;



    //wersja michała
    //int main()
    //{
    //    float a = 0;
    //    float b = 0;
    //    ​
    //        std::cout << "Podaj 1 bok: ";
    //    std::cin >> a;
    //    std::cout << "Podaj 2 bok: ";
    //    std::cin >> b;
    //    ​
    //        double c = sqrt(pow(a, 2) + (b * b));
    //    std::cout << "Przeciwprostokatna: " << c << std::endl;
    //}
    //Collapse










}