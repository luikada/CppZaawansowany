#include <iostream>

template<typename T>
T max(T a, T b)
{
    //if (a > b)
    //{
    //    return a;
    //}
    //else
    //{
    //    return b;
    //}

    return a > b ? a : b; //operator potrójny (ternary)
}

template<typename T>
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}

template<>
char* max(char* a, char* b)
{
    if (strcmp(a, b) > 0)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template<typename T>
T max(T* data, const unsigned int n)
{
    T tmpMax = data[0];
    for ()
}

int main()
{
    int num1 = 100;
    int num2 = 10;
    std::cout << "Wieksza int: " << max(num1, num2) << std::endl;
    std::cout << "Wieksza double: " << max(1.23, 21.55) << std::endl;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    std::cout << "Wiekszy ptr: " << *max(ptr1, ptr2) << std::endl;

    std::cout << "Wiekszy ³anuch: " << max("AAAzaabbba", "AAAccc") << std::endl;

    const unsigned int size = 10;
    int tab[size] = { 0, 412, 123, 12, 32, 11, 23, 56, 1, 555 };
    std::cout << "Najwiekszy element w tablicy:" << max(tab, size) << std::endl; e() << std::endl;