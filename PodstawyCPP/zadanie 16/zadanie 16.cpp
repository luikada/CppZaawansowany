
#include <iostream>

int main()
{
    int days = 0;
   
    std::cout << "podaj liczbe dni:" << std::endl;
    std::cin >> days;
   
    int n_years = days / 365; 
    int days_2 = 480 - n_years * 365;
    int n_months = days_2 / 30;
    int days_3 = days_2 - n_months*30;


    std::cout << "lat: " << n_years << std::endl;
    std::cout << "miesiecy: " << n_months << std::endl;
    std::cout << "dni: " << days_3 << std::endl;


}
