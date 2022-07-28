

#include <iostream>

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    std::cout << "Podaj rok ";
    std::cin >> year;

    std::cout << "Podaj miesaic ";
    std::cin >> month;

    std::cout << "Podaj dzien ";
    std::cin >> day;

    if (year > 0)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 0 && day <= 31)
            {
                std::cout << "Poprawna data" << std::endl;
            }
            else
            {
                std::cout << "Nieprawid³owa iloœæ dni" << std::endl;
            }
            break;
        case 2:
            if (day > 0 && day <= 28)
            {
                std::cout << "Poprawna data" << std::endl;
            }
            else
            {
                std::cout << "Nieprawid³owa iloœæ dni" << std::endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 0 && day <= 30)
            {
                std::cout << "Poprawna data" << std::endl;
            }
            else
            {
                std::cout << "Nieprawid³owa iloœæ dni" << std::endl;
            }
            break;
        default:
            std::cout << "Niepoprawny miesiac" << std::endl;
        }
    }
    else
    {
        std::cout << "Nieprawid³owy rok" << std::endl;
    }

}