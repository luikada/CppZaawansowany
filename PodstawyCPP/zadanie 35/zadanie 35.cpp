// Wczytaj od u¿ytkownika miesi¹c jako liczbê, a wypisz na
//konsole jako s³owo
//

#include <iostream>

int main()
{
    unsigned int month = 0;

    std::cout << "podaj miesiac jako liczbe "<<std::endl;
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "styczen" << std::endl;
        break;

    case 2:
        std::cout << "luty" << std::endl;
        break;

    case 3:
        std::cout << "marzec" << std::endl;
        break;

    case 4:
        std::cout << "kwiecien" << std::endl;
        break;

    case 5:
        std::cout << "maj" << std::endl;
        break;

    case 6:
        std::cout << "czerwiec" << std::endl;
        break;

    case 7:
        std::cout << "lipiec" << std::endl;
        break;

    case 8:
        std::cout << "sierpien" << std::endl;
        break;

    case 9:
        std::cout << "wrzesien" << std::endl;
        break;

    case 10:
        std::cout << "pazdziernik" << std::endl;
        break;

    case 11:
        std::cout << "listopad" << std::endl;
        break;

    case 12:
        std::cout << "grudzien" << std::endl;
        break;

    default:
        std::cout << "podaj wartosc od 1 do 12" << std::endl;
        break;

    }

}

