#include <iostream>

int main()
{
    std::cout << "Hello World!\n";   
    
    std::cout << "podaj dwie liczby calkowite" << std::endl;

    int a = 0;
    int b = 0;

    std::cin >> a;
    std::cin >> b;

    std::cout << "podane liczby to: " << std::endl
        << a << ","
        << b << std::endl << std::endl;
   
    int c = b;
    int d = a;

    std::cout << "zmienione liczby to: " << std::endl
        << c << ","
        << d << std::endl << std::endl;





}
