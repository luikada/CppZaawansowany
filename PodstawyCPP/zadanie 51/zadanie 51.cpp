// Napisz program który wczyta od u¿ytkownika do jednej zmiennej imiê i nazwisko 
//oraz do osobnej zmiennej jego miejscowoœæ zamieszkania
#include <iostream>
#include <string>

int main()
{
    std::string fullName;
    std::string city;

    std::cout << "Podaj imie i nazwisko ";
    std::getline (std::cin >> std::ws, fullName);
   
    std::cout << "Podaj miejscowosc zamieszkania ";
    std::cin >> city;

    std::cout << "Witaj " << fullName << " z "<<city;
    std::cout << std::endl;
    std::cout << fullName.length();



}

