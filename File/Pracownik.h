#pragma once
#include <string>
#include <random>
#include <File.h>

//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysoko�� pensji)
//* Numer pracownika ma si� generowa� losowo podczas tworznia nowego pracownika, dla u�atwienia mog� si� powtarza�
//* warto doda� operator << i >>
class File;
class Pracownik
{
public: 
	Pracownik Pracownik();
	Pracownik Pracownik(const Pracownik&old);
	virtual ~Pracownik();
	

private:
	File document;

	std::string _name;
	std::string _surname;
	int _idx;
	double _salary;


};

