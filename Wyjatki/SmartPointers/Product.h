#pragma once
#include <string>

//Zadanie: Stw�rz klas� Product(float price, string name) oraz 2 konstruktory
//(domyslny i z 2 parametrami).
// U�ywaj�c make_uniqe stw�rz i przypisz do uniqe_ptr :
//	Obiekt u�ywaj�c konstruktora domy�lnego
//	Obiekt u�ywaj�c konstruktora z 2 parametrami
//	Tablic� 4 Produkt�w

class Product
{
private :
	static float _price;
	std::string _name;

public: 
	Product();
	Product(static float price, std::string name);
};

