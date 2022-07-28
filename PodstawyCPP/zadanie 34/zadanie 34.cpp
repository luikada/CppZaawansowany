//Napisz program który sumuje n liczb podzielnych przez k,
//gdzie n i k mo¿e podaæ u¿ytkownik.  Wykorzystaj do tego instrukcj continue

#include <iostream>

int main()
{
    unsigned int n = 0;
    int k = 0;
    int a = 0;
    int sum = 0;


    std::cout << "Podaj ile liczb bedzie sumowanych "<<std::endl;
    std::cin >> n;
    std::cout << "Podaj przez jaka liczbe maja byc podzielne " << std::endl;
    std::cin >> k;

    
     
    for (int i = 1; i <= n; i++)

    {
        std::cout << "Podaj liczbe: " << std::endl;
        std::cin >> a;

        if ((a%k) != 0)
        {
           continue;
        }

        sum+=a;
    } 

    std::cout << "Suma:" << sum;

}

