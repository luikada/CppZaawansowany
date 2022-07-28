#include "Mateusz String.hpp"

void foo(MyString a) //wywola kopiujacy konstruktor
{
}

int main()
{
	MyString empty;
	empty.print();

	MyString alaMaKota((char*)"Ala ma kota");
	//alaMaKota.print(); // Ala ma kota
	std::cout << alaMaKota << std::endl; // korzystamy z przeciazonego operatora <<
	MyString alaMaKotaAKotMa = alaMaKota.append((char*)",a kot ma ");
	alaMaKota.print(); // Ala ma kota
	alaMaKotaAKotMa.print(); //Ala ma kota, a kot ma

	char arr[] = { 'A', 'l', 'e', '\0' };
	MyString ale(arr);
	ale.print(); //Ale
	MyString full = alaMaKotaAKotMa.append(ale);
	//MyString full = alaMaKotaAKotMa + ale;

	full.print(); //Ala ma kota a kot ma Ale
	std::cout << "First word " << full.firstWord() << std::endl;

	MyString a;
	MyString x = a; //kopiujacy operator przypisania -- do zaimplementowania
	MyString c(x); //kopiujacy konstruktora
	foo(a);
}
