// zadanie 41.cpp : Napisz funkcje ktora zwroci najwieksza 
// 
// 
//

#include <iostream>

int max(int tab[], const int size)
{
    int maxValue = tab[0]; // zakladam ze pierwszy jest najwiekszy od 0 zaczynam sprawdzanie

    for (int i = 1; i < size; i++)  // i=1 bo zazcynamy sprawdzanie od 0. mozna zrobic tez i = index 0
    {
        if (tab[i]>tab[0])
        {tab[0] = tab[i];}
    }
    return maxValue;
}

int maxIdx(int tab[], const int size, int maxValue)
{

    for (int i = 0; i < size; i++)
    {
        if (tab[i] == maxValue)
            return i;

    }

}
// znjadz index (nie liczbe) najwieksza z wczytanj tablicy

int maxIndex(int tab[], const int size)
{

    int maxValue = tab[0]; 
    int maxIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (tab[i] > maxValue)
        {
            maxValue = tab[i];          //znajdujesz max wartosc
            maxIndex = i;               // znaleziony index maxa z poprzedniej linijki z tablicy 
        }

    }
    return maxIndex;
}

int main()
{

    const int size = 10; //zadeklarowanie rozmiaru tablicy
    int tab[size];  //zadeklarownie tablicy 

    for (int i = 0; i < size; i++) //petla ktora od pierwszego do ostatniego elementu tablicy wczyta wartosci od uzytkownika
    {
        std::cin >> tab[i];

    }

    int idx = maxIndex(tab, size);  // zmienna idx trzyma index max wartoscxi czyli wynik z funkcji


 std::cout << "Najwiekszy elementy w tej tablicy to: tab[ "<< idx << " ]"<< tab[idx];



}