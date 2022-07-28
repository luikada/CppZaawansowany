//Napisz funkcjê która sprawdzi czy podana liczba znajduje siê w
//podanej tablicy.
//

#include <iostream>


bool Checkdigit(int tab[], const int size, int digit)
{
    for (int i = 0; i < size; i++)
    {
        if (tab[i] == digit)
        {
            return true;

        }

    }

        return false;   // tutaj false, bo musi przejsc cala tablice po skonczonym for nie if!
    
}



//Napisz funkcjê która sprawdzi czy podana liczba znajduje siê w
//podanej tablicy.

int contains(int tab[], const int size, int number)
{
    bool hasNumber = false;  // zakladam ze tablica nie ma tej wartosci -lepiej niz ze ma gdyby nie znalazlo
    {
        for (int i = 0; i < size; i++)
        {
            if (tab[i] == number)
            {

                hasNumber = true;
                
            }

        }
    }    return hasNumber;

}

//Napisz funkcjê która sprawdzi ile razy znajduje sie w tab

 int contains2(int tab[], const int size, int number)
{
    int HowMany = 0;
    {
        for (int i = 0; i < size; i++)
        {
            if (tab[i] == number)
            {

                HowMany++;
            } 

        }
    }
    return HowMany;
}






int main()
{
    const int size =20;
    int tab[size] = { 10, 110, 12, 13, 14, 15, 4442, 53, 1298, 239, 29209, 11, 39, 22, 203, 2000, 202020, 5943, 20 };

    int number = 0;
    std::cin >> number;

    std::cout << "ile razy zawiera: " << contains2(tab, size, number);

}