// zadanie 10.cpp : 10.  Napisz funkcjê która zwróci wskaŸnik na wiêksz¹ z 2 liczb.
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