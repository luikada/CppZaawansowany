// zadanie 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool a = false;
    bool b = false;
    bool c = false;

    std::cout << "podaj a" << std::endl;
    std::cin >> a;
    std::cout << "podaj b" << std::endl;
    std::cin >> b;
    std::cout << "podaj c" << std::endl;
    std::cin >> c;
    std::cout << std::endl;

    std::cout << "prawo rozdzielnosci koniunkcji wzgledem alternatywy?" << std::endl;

    bool lewa = (a && (b || c));
    bool prawa = ((a && b) || (a && c));

    std::cout << lewa << "<==>" << prawa << std::endl;


    std::cout << "2 prawo morgana" << std::endl;
    bool morgan_l = !(a && b);
    bool morgan_p = !a && !b;
    std::cout << morgan_l << "<==>" << morgan_p << std::endl;

}


