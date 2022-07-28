#include <iostream> //ciekawosta: referencje sa zrobione wskaznikami pod spodem ;) 
int main()
{
    int x = 100; //zmienna x
    int& x_ref = x; // referencja na zmienna x
    int* x_ptr = &x; // wskaŸnik na x. poprzez &x pobieramy adres zmiennej x - "&" operator pobrania adresu
    std::cout << "x= " << x << std::endl;
    std::cout << "x_ref= " << x_ref << std::endl;
    std::cout << "x_ptr= " << x_ptr << std::endl; // ta linijka wypisze adres na ktory wskazuje wskaznik x_ptr
    std::cout << "*x_ptr= " << *x_ptr << std::endl; // tutaj odczytamy wartosc pod wskaŸnikiem "*" - operator wy³uskania(dereferencji)
    //x_ptr = &x_ref; //sprawdzenie czy referencja i zmienna pokazuja to ten sam adres w pamieci
    //std::cout << "'x_ptr= " << x_ptr << std::endl;
}