// 5. Napisz funckjê "?? postIncrement(??)", która zrobi to co robi operator i++. Nie u¿ywaj jednak tego operatora wewn¹trz tej funkcji.
//

#include <iostream>
void postincrementation(int& a)
{
    a += 1;
}
int main()
{
    int num1 = 0;
    std::cout << "podaj liczbe do zwiekszenia:" << std::endl;
    std::cin>>num1;
    postincrementation(num1);
    std::cout << "wynik po posinkrementacji to:"<<num1;
}

