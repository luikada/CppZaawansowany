// zadanie 33a.cpp : Napisz program który wczyta 10 liczb i wczyta ich sume.
//
#include <iostream>
int allN()
{
    int a = 0;
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "podaj liczbe: " << std::endl;
        std::cin >> a;

        sum += a;
    }

    return sum;
}



int main()
{
   
    std::cout << allN() << std::endl;

}