#include <iostream>

int main()
{

    char a = 0;
 
    std::cout << "Podaj k,s lub m"<<std::endl;
    std::cin >> a;


    if ('k' == a || 'K' == a)
    {
        std::cout << "Ku ku Ku ku!" << std::endl;

    }
    else if ('s' == a || 'S' == a)
    {
        std::cout << "Sssssssssss!" << std::endl;

    }
    else if ('m' == a || 'M' == a)
    {
        std::cout << "Muuu!" << std::endl;

    }
    else    
    {
        std::cout << "“Akuku!" << std::endl;

    }



}


