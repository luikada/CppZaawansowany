////Klasa File
//* RAII
//* c - tor przyjmujacy nazwę pliku, rzuca wyjątek gdy nie uda się otwrzyc pliku
//* d - tor zamyka plik
//* Mile widziane funkjce szablonowe zapisujące / wczytjące dowonly typ danych(wspierający operator << >>)
//* Zakładamy, ze 1 linia pliku 1 wartość(dane nie mogą zwierać białych znaków)
//* Zakładamy, że użytkownik zna format pliku i będzie wczytywał różne typy według znanej sobie kolejności
//np :
//string
//int
//double
//int
//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysokość pensji)
//* Numer pracownika ma się generować losowo podczas tworznia nowego pracownika, dla ułatwienia mogą się powtarzać
//* warto dodać operator << i >>
//*Użyj klasy File do zapisania danych 10 pracowników
//* Wczytaj ze pomocą tej klasy te dane do wektora a następnie wypisz pracowników


#include "File.h"

File::File(std::string fileToOpen)
{
    std::fstream fileToOpen;
    fileToOpen.open();

    if (fileToOpen.is_open()) 
    {
        std::cout << "Nice job ;)";
    }
    else {
        throw std::string("Nie mozna otworzyc pliku");
    }

}

File::~File()
{
    fileToOpen.close();
}
