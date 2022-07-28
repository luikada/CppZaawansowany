//Napisz funkcjê która zwraca liczbê cyfr w liczbie ca³kowitej.


// (300/10=30    1
// 30/10=3      2
// 3/10=0,3     3 =0 gdy nie dzielisz przez ulamki tylko int)


unsigned int CountDigits(int number)
{
    int loopSum = 0;

    while (number != 0)

    {
        loopSum++;

        number /= 10;
    }
    return loopSum;

}

unsigned int DigitsNum(int number)
{
    int loopTimes = 0;
    
    if (number == 0)
    {
       return 1;
    }
    else
    {
        do
        {
            loopTimes++;
            number /= 10;

        } while (number != 0);
    }
    return loopTimes;

}
#include <iostream>

int main()
{
  // std::cout<< CountDigits(1000);
   std::cout << DigitsNum(0);
  
}

