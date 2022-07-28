//  Utwórz zmienne i wskaŸniki do nich, a nastêpnie wypisz ich wartoœci:
//* int
//* float
//* char
//* const int
//* tablice 100 int
//

#include <iostream>
#include <stdlib.h>

int main()
{
	int a = 0;
	int& r_a = a;
	int* a_ptr= &r_a;

	float b = 0.0f;
	float& r_b = b;

	char c = 0;
	char& r_c = c;

	const int SA = 0;
	const int r_SA = SA;

	int tab[100] = {};
	int abc =  rand();
	for (int i = 0; i < 99; i++)
	{
		abc = tab[i];
	}

}
