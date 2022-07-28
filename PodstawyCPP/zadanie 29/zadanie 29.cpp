//Napisz program który obliczy sumê n kolejnych liczb ca³kowitych.

#include <iostream>
  unsigned int NumSum(int a)
{
    unsigned int sum = 0;

    for (int i = 1; i < a; i++)
    {
        sum += i;
    }
    return sum;

}

double sumNum(double numTimes)
{
    double a = 0.00;

    for (int i = 0; i < numTimes; ++i)
    {
        a+=i;


    }
    return a;


}

int main()
{
    int num = 0;
    std::cout << "podaj liczbe: " <<std::endl;
    std::cin >> num;
    std::cout << "suma to " << NumSum(num) << std::endl;
    std::cout << "suma to " << sumNum(num) << std::endl;


}


