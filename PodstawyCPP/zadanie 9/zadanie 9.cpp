
#include <iostream>

int main()
{

    std::cout << "podaj trzy liczby" << std::endl;

    float a = 0.0000;
    float b = 0.0000;
    float c = 0.0000;



    std::cin >> a;
    std::cin >> b;
    std::cin >> c;


    std::cout << "podane liczby to: " << std::endl
        << a << ","
        << b << ","
        << c << std::endl << std::endl;
    std::cout << "ich srednia arytmetyczna to: " << (a + b + c) / 3 << std::endl;





    std::cout << "podaj trzy liczby" << std::endl;

    int aa = 0;
    int bb = 0;
    int cc = 0;



    std::cin >> aa;
    std::cin >> bb;
    std::cin >> cc;

    std::cout << "podane liczby to: " << std::endl

        << aa << ","
        << bb << ","
        << cc << std::endl << std::endl;

    float d = (aa + bb + cc) / 3.000;

    std::cout << "ich srednia arytmetyczna to: " << d << std::endl;

}
