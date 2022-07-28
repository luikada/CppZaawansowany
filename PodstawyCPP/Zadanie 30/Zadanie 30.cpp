//Napisz program który wypisze na ekran n!.
//n = n* (n-1)*n(n-2)....n*n-1

//mnozenie w do³
#include <iostream>

// int multiplicated(int num)
// {
   //  int wynik = 1; /* nie =0 bo mn ozenie przez 0 daje 0 */
    
   // for (int i = num; i <= 1; i--) /*i jest tu mniejsze lub rowne 1 dlatego nie dziala p[ojawia sie wtedy wykrzyknik przy budowaniu */
   // {
   //     wynik *= i;

   // }

    // return wynik;
    // }


int Silnia (int num)
{
    int result = 1;

    for (int i = num; i >= 1; i--)
    {
        result *= i;

    }
     
       
    return result;

}

int main()
{
    std::cout << Silnia(6);
     
}
