#pragma once
#include <string>

//Zadanie: Stwórz klasê Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).
// U¿ywaj¹c make_uniqe stwórz i przypisz do uniqe_ptr :
//	Obiekt u¿ywaj¹c konstruktora domyœlnego
//	Obiekt u¿ywaj¹c konstruktora z 2 parametrami
//	Tablicê 4 Produktów

class Product
{
private :
	static float _price;
	std::string _name;

public: 
	Product();
	Product(static float price, std::string name);
};

