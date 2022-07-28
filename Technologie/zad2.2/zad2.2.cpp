//Napisz funkcjê, która przyjmie dwie zmienne typu double, a nastêpnie wyrówna ich wartoœæ (obie ustawi na ich œredni¹).

#include <iostream>
void meanAverage(double num1, double num2, double& numR)
{

    numR = (num1 + num2) / 2;

}
int main()
{
    double a = 0.00;
    double b = 0.00;
    double c = 0.00;



    std::cout << "podaj liczbe " << std::endl;
    std::cin >> a;
    std::cout << "podaj 2 liczbe " << std::endl;
    std::cin >> b;
    std::cout << " domyslnie c to:  " << c << std::endl;
    meanAverage(a, b, c);
    std::cout << " srednia z podanych liczb to:  " << c << std::endl;

}
