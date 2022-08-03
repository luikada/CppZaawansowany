////Klasa File
//* RAII
//* c - tor przyjmujacy nazwê pliku, rzuca wyj¹tek gdy nie uda siê otwrzyc pliku
//* d - tor zamyka plik
//* Mile widziane funkjce szablonowe zapisuj¹ce / wczytj¹ce dowonly typ danych(wspieraj¹cy operator << >>)
//* Zak³adamy, ze 1 linia pliku 1 wartoœæ(dane nie mog¹ zwieraæ bia³ych znaków)
//* Zak³adamy, ¿e u¿ytkownik zna format pliku i bêdzie wczytywa³ ró¿ne typy wed³ug znanej sobie kolejnoœci
//np :
//string
//int
//double
//int
#pragma once
#include <string>
#include <fstream>
#include <iostream>

class File
{
public:
	File(std::string fileToOpen);
	virtual ~File();
	File(std::string fileToOpen);
};

