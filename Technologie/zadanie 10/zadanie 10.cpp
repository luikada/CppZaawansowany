// zadanie 10.cpp : 10.  Napisz funkcj� kt�ra zwr�ci wska�nik na wi�ksz� z 2 liczb.
//

#include <iostream>
int* findBigger(int* num1, int* num2)
{
	if (*num1 > *num2)
	
		return num1;
	
	else
		return num2;
}

int main()
{
	int a = 9;
	int* a_ptr = &a;

	int b = 3;
	
	std::cout<< findBigger(&a, &b);
}