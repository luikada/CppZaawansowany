#include <iostream>

int main()
{

    std::cout << "podaj dwie liczby calkowite" << std::endl;

    int liczba1 = 0;
    int liczba2 = 0;
   


    std::cin >> liczba1;
    std::cin >> liczba2;
    
    std::cout << "podane liczby to: " << std::endl << std::endl
        << liczba1 << ","
        << liczba2 << std::endl << std::endl;
    
    std::cout << "dodawanie " << liczba1 + liczba2 << std::endl;
    std::cout << "odjemowanie " << liczba1 - liczba2 << std::endl;
    std::cout << "mnozenie " << liczba1 * liczba2 << std::endl;
    std::cout << "dzielenie " << liczba1 / liczba2 << std::endl;
    std::cout << "reszta z dzielenia " << liczba1 % liczba2 << std::endl;

    //Kto skoñczy³ niech sobie sprawdzi jak to bêdzie dla liczby float (bez reszty z dzielenia %)


    std::cout << "podaj dwie liczby calkowite" << std::endl;

    float l1 = 0.0f;
    float l2 = 0.0f;



    std::cin >> l1;
    std::cin >> l2;

    std::cout << "podane liczby to: " << std::endl << std::endl
        << l1 << ","
        << l2 << std::endl << std::endl;

    std::cout << "dodawanie " << l1 + l2 << std::endl;
    std::cout << "odjemowanie " << l1 - l2 << std::endl;
    std::cout << "mnozenie " << l1 * l2 << std::endl;
    std::cout << "dzielenie " << l1 / l2 << std::endl;






}

