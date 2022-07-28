
#include<iostream>

int main()

{
  double a = 0;
  double b = 0;



    std::cout << "podaj 1 liczbe "<<std::endl;
    std::cin >> a; 
    std::cout << "podaj 2 liczbe" << std::endl;
    std::cin >> b;

   
    
    std::cout << "czy liczby sa rowne? " << (a == b) << std::endl;
    std::cout << "czy liczby sa rozne? " <<(a != b) << std::endl;
    std::cout << std::boolalpha;
    std::cout << " Czy pierwsza jest wiêksza? " << (a > b) << std::endl;
    std::cout << "Czy pierwsza jest mniejsza " << (a < b) << std::endl;
}
