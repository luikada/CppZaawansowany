// referencje brudnopis.cpp
//utorze zmienne i referencje do nich init, float, char, string

#include <iostream>
int& reff()
{
	int x = 100;
	return x; //niebezpieczne zwracanie lokalnej zmiennej przez referencje
}
int main()
{
	int a = 0;
	int& a_ref = a; //referencje trzeba odrazu zainicjalizowac tu a=0;
	 // typ referencji musi byc zgodny
	a_ref += 10;

	float b = 0.0f;
	float& b_ref = b;

	char c= 0;
	char& c_r = c;

	std::string d = {};
	std::string& dref = d;
	
	std::cout << "a " << a <<std::endl << "a_ref = " << a_ref<<std::endl;

	//a i a_ref sa teraz dfokladnie ta sama zmienna mozna je zmieniac 
	//obie i beda sobie odpowiadac. 
	// referencja odnosi si do typu


	
	int& z = reff();
		std::cout << z;
	


}