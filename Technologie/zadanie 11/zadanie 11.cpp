// zadanie 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Napisz funkcjÍ ktÛra wczyta od uøytkownika liczbe do podanej zmiennej(3 wersje->przez zwrcanie wartoúci,
 //   przez modyfikacje wskaünika i przez modyfikacje referencji)

#include <iostream>

char basic(char ch1, char ch2, char ch3)
{
    std::cout << "podaj znak" << std::endl;
    std::cin >> ch1;

    std::cout << "podaj znak" << std::endl;
    std::cin >> ch2;

    std::cout << "podaj znak" << std::endl;
    std::cin >> ch3;

    return ch1, ch2, ch3;

}
int main()
{
    char a = 0;
    char b = 0;
    char c = 0;

    basic(a, b, c);

    
}
