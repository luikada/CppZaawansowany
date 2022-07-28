

#include <iostream>

int main()
{
    std::cout << "Hello World! Klaudia\n"
        << " Hi again"
        << std::endl << std::endl
        << "how you doin'\n";

    std::cout
        << std::endl << "02-04-2022\n Klaudia Tracz\n drugie zajecia\n"
        << std::endl;

    std::cout
        << "02 kwiecien" << std::endl
        << "Klauida Tracz" << std::endl
        << "2" << std::endl
        << 2 << std::endl;

    std::cout
        << "specjalne znaki // \\\\ $ & % " << std::endl;

    int calkowita = 21;
    float rzeczywista = 21.2090;
    char znak = 200;
    bool logiczna = false;

    std::cout
        << "calkowita=" << calkowita << std::endl
        << "rzeczywista=" << rzeczywista << std::endl
        << "char=" << znak << std::endl
        << "logiczna=" << logiczna << std::endl;

    

    std::cout << std::endl;

    short krotka = 123;
    std::cout << "wartosc poczatkowa=" << krotka << std::endl;
    krotka = krotka - 52768;
    std::cout << "wartosc koncowa=" << krotka << std::endl;

    int dluga = 2147483648;
    std::cout << "dluga=" << dluga << std::endl
        << std::endl;

    int krotkadwa = 123;
    std::cout << "wartosc poczatkowa=" << krotkadwa << std::endl;
    krotkadwa = krotkadwa - 52768;
    std::cout << "wartosc koncowa=" << krotkadwa << std::endl;

    unsigned int dlugadwa = 2147483648;
    std::cout << "dluga=" << dlugadwa << std::endl;


    const float pi = 3.1415;
    const int dwa = 2;
    std::cout << "stala=" << dwa << std::endl;
    std::cout << "sp=" << pi << std::endl;


}

