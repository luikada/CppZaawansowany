#pragma once
#include <string>
#include <random>
#include <File.h>

//* Dodaj klase Pracownik(imie, nazwisko, losowy numer pracownika, wysokoœæ pensji)
//* Numer pracownika ma siê generowaæ losowo podczas tworznia nowego pracownika, dla u³atwienia mog¹ siê powtarzaæ
//* warto dodaæ operator << i >>
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

