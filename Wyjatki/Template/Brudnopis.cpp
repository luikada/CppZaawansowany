
#include <iostream>
#include <iomanip>

template<typename T>
void print(T s) //szablon funkcji print
{
    std::cout << s << std::endl;
}

template<>
void print(double s) //specjalizacja 1 dla typu double
{
    std::cout << std::setprecision(2) << s << std::endl;
}

template<>
void print(bool value) //specjalizacja 2 dla typu bool
{
    if (value)
    {
        std::cout << "Prawda" << std::endl;
    }
    else
    {
        std::cout << "Falsz" << std::endl;
    }

}

template<int N>
void printKu()
{
    for (int i = 0; i < N; ++i)
        std::cout << "Ku ";
}

struct D
{
private:
    int z;
};

int main()
{
    int i = 1;
    double d = 1232.21112;
    bool b = true;

    print(i);
    print(d);
    print(b);

    printKu<100>();

    //D obj;
    //print(obj);
}
Footer
© 2022 GitHub, Inc.