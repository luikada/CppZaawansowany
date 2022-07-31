//Utwórz wektor 100 losowych liczb z przedziału 0 10, następnie:
//a) wypisz ten wektor
//b) zlicz ilość wystąpień liczby 5
//c) Wylicz średnia wartość
//d) Zrób to samo dla innego rozkładu wartości
#include <iostream>
#include <vector>
#include <random>

std::vector<int> numbers;
std::random_device r; //urz�dzenie do generowania entropii (zalezne od systemu operacyjnego)
std::default_random_engine defEngine(r()); //tworzymy sobie silnik losowosci, ktory bedzie zwraca� nam losowe liczby
std::uniform_int_distribution<int> intDistro(0, 10); // ubiermy ten nasz silnik w klase zapewniaj�c� nam odpowiedni rozk�ad liczb

for (int i = 1; i <= 100; i++)
{
    numbers.push_back(intDistro(defEngine)); //pobiernie kolejnych liczb losowych
}

for (const int n : numbers)
{
    std::cout << n << " ";
}

std::cout << std::endl << std::endl