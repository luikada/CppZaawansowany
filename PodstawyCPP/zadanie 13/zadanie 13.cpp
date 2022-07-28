// zadanie 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;



    std::cout << "podaj 1 bok " << std::endl;
    std::cin >> a;
    std::cout << "podaj 2 bok" << std::endl;
    std::cin >> b;
    std::cout << "podaj 3 przeciwprostokatna" << std::endl;
    std::cin >> c;

    std::cout << "czy 3 liczby tworza trojkat prostokatny?"<<(a*a+b*b==c*c) << std::endl;

    bool t_prost = (((a * a) + (b * b)) == (c * c));
    std::cout << "Czy trojkat jest prostokatny: " << std::boolalpha << t_prost << std::endl;
}






