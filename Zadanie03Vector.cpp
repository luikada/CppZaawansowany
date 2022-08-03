//Zad 0.3
//Utwórz wektor liczb całkowitych od - 100 do 100.
//a) Następnie sprawdź czy wszystkie liczby są dodatnie.
//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
//c) Usuń z kontenera 0.
//d) Następnie sprawdź czy kontener nie zawiera wartości 0.
//e) Sprawdź czy kontener jest posortowany
//f) Skopiuj do drugiego wektora wszystkie liczby większe od 90 i mniejsze od - 90
//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynając od 78

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>



int main()
{
	std::vector <int> V3(201);
	std::iota(V3.begin(), V3.end(), -100);
	std::cout << "Vector: ";
	std::for_each(V3.begin(), V3.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << std::endl << std::endl;

	//a) Następnie sprawdź czy wszystkie liczby są dodatnie.
	auto check= std::find_if(V3.begin(), V3.end(), [](int i) {return i<0;});
	
	(check != std::end(V3))
		? std::cout << "Vektor ma rowniez liczby ujemne\n"
		: std::cout << "Vektor ma tylko liczby dodatnie\n";

	//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
	auto checkDivision = std::find_if(V3.begin(), V3.end(), 
		[](int i) { return (i%3==0)&&(i % 5 == 0)&&(i%30 == 0); });
	
	(checkDivision != std::end(V3))
		? std::cout << "Vektor ma liczbe podzielna przez 3, 5, i 30 jest to: " << *checkDivision
		: std::cout << "Vektor nie ma liczbe podzielna przez 3, 5, i 30\n";

	std::cout << std::endl<< std::endl;

	//c) Usuń z kontenera 0.
	V3.erase(std::remove(V3.begin(), V3.end(), 0));

	//d) Następnie sprawdź czy kontener nie zawiera wartości 0.
	std::for_each(V3.begin(), V3.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << std::endl << std::endl;

	//e) Sprawdź czy kontener jest posortowany
	std::cout << "czy wektor jest posortowany? " << std::boolalpha
	<<std::is_sorted(V3.begin(), V3.end());
	std::cout << std::endl << std::endl;

	//f) Skopiuj do drugiego wektora wszystkie liczby większe od 90 i mniejsze od - 90
	std::vector <int> v3Copy;
	std::copy_if(V3.begin(), V3.end(), std::back_inserter(v3Copy),[](int n) {return (n<-90)||(n > 90); });
	std::cout << "kopia vektora : ";
	std::for_each(v3Copy.begin(), v3Copy.end(), [](const int n) { std::cout << n << ' '; });
	std::cout << std::endl << std::endl;


	//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynając od 78

 //metoda bez find i copy_n
   //std::vector <int> tenNumbers;
	//copy_if(V3.begin(), V3.end(), std::back_inserter(tenNumbers), [](const int i) { return i > 78 && i <= 88; });
	//std::cout << "kopia vektora : ";
	//std::for_each(tenNumbers.begin(), tenNumbers.end(), [](const int n) { std::cout << n << ' '; });
	//std::cout << std::endl << std::endl;
	
	std::cout << std::endl << std::endl << std::endl;

	//	na pewno nie powinno sie tam uzywac remove
	//	powinnas uzyc find a potem copy_n, zeby skopiowac od iteratora zwroconego z funkcji find

	std::vector <int> tenNumbers;
	auto xElement = std::find(V3.begin(), V3.end(), 78);
	std::copy_n(xElement, 10, std::back_inserter(tenNumbers));   //nie dziala tenNumbers.begin(), std::back_inserter(tenNumbers)
	std::for_each(tenNumbers.begin(), tenNumbers.end(), [](int i) {std::cout << i << ', '; });



	std::cout << std::endl << std::endl << std::endl;

	//Michal dodawanie ostatnich liczn jako second_inserter
	std::cout << "Michal " << std::endl << std::endl;
	std::vector<int> numbers(100);
	std::iota(numbers.begin(), numbers.end(), -80);

	
	std::vector<int> second;
	std::copy_n(numbers.begin(), 10, std::back_inserter(second));
	std::cout << std::endl << std::endl << std::endl;

	auto second_inserter = std::back_inserter(second);
	second_inserter = 123;
	second_inserter = 99;

	std::for_each(second.begin(), second.end(), [](const int i) { std::cout << i << ";\n"; });

	//std::for_each(nums.end() - 100, nums.end(), [](int i) { std::cout << i << '\n'; }); // wypisze 100 ostatnie elementów

}



