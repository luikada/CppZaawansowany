#include <iostream>

int max(int num1, int num2, int num3)
{
    if ((num1 > num2) && (num1 > num3))
    {
        return num1;
    }
    else if ((num2 > num3) && (num2 > num1))
    {
        return num2;
    }
    else 
    {
        return num3;
    }
   
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;


    std::cout << "podaj trzy liczby calkowite" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout <<"najwieksza jest: " <<max (a, b, c)<<std::endl;
}