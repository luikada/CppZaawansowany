//Zad 0.2
//Stwórz wektor 100 kolejnych liczb całkowitych z zakresu od 1 do 100
//c) Następnie policz ile jest liczb większych niż 4 (count_if + predykat)
//d) Zrób to samo dla a, b i c, ale wykorzystaj lambdę
//e) W zależności od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//	f) Zlicz sumę wszystkich liczb parzystych i zapisz ją do zmiennej lokalnej int sum;

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

struct lessThan50
{
public:

	void operator()(int value)
	{
		if (value < stop)
		{
			std::cout << value;
		}
	}

private:

static const int stop=50;
};

//class PrintLessThan                     //clasa jak moj struct tylko porownujaca do wartosci wpisanej nie stalej 50
//{											//wtedy w main  PrintLessThan(50) gdzie 50 mozna zmieniac
//public:
//	PrintLessThan(int bound)
//		: _bound(bound)
//	{}
//
//	void operator()(int value)
//	{
//		if (value < _bound)
//		{
//			std::cout << value << std::endl;
//		}
//	}
//
//private:
//	int _bound;
//};
bool predykatForFour(const int i)
{
	return i > 4;
};

int main()
{
	std::vector <int> v;  //jest zapis v(100) to wektor wypelniony 0.
	//v.reserve(100); ni jest niezbedne tu

	//a) Wypisz wszystkie liczby(for_each + unary function)
	for (size_t i = 0; i < 100; ++i)
	{
		v.push_back(i + 1);

	}
	std::for_each(v.begin(), v.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << std::endl << std::endl;

	//a2. aiota fukcja z biblio numeric
	std::vector <int> numb(100);
	std::iota(numb.begin(), numb.end(), 1); // funkcja w ktorej inkrementacja jest wbudowana
	std::cout << "iota: "; 
	std::for_each(numb.begin(), numb.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << std::endl << std::endl;
	

//b) Wypisz wszystkie liczby mniejsze od 50 (for_each + funktor)
	lessThan50 check;// nie musisz tworzyc obiektu 
	std::for_each(v.begin(), v.end(), check);
	//std::for_each(v.begin(), v.end(), lessThan50());
	std::cout << std::endl << std::endl;

	///c) Następnie policz ile jest liczb większych niż 4 (count_if + predykat)
	int result = std::count_if(v.begin(), v.end(), predykatForFour);
	std::cout << std::endl;
	std::cout <<"ilosc wiekszych to: "<<result << std::endl;
	std::cout << std::endl << std::endl;

	//d)Zrób to samo dla a, b i c, ale wykorzystaj lambdê
	//d.a)	

	int resultForLambdas=std::count_if(v.begin(), v.end(), [](const int i) {return i > 4; });
	std::cout << std::endl;
	std::cout << "ilosc wiekszych z wyrazeniem lambda to: " << resultForLambdas << std::endl;
	std::cout << std::endl << std::endl;	 

	//e) W zale¿noœci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez niego(for_each + lambda)
	int dzielnik = 5;
	std::for_each(v.begin(), v.end(), [&dzielnik](int i) {if (i % dzielnik == 0) std::cout<<i <<", ";		});
	std::cout << std::endl << std::endl;

	//	f) Zlicz sumę wszystkich liczb parzystych i zapisz ją do zmiennej lokalnej int sum;
	int sum = 0;
	std::for_each(v.begin(), v.end(), [&sum](int i) {if (i % 2 == 0) sum += i; });
	std::cout << "suma liczb parzystych to: "<< sum;
	

}