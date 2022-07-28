//Wczytaj od uzytkownika liczby do wektora.Zakoñcz wczytywanie gdy u¿ytkownik poda 0.
//Wypisz sumê wszystkich elementów.
//Posortuj ten wektor(bubble sort) i go wypisz.

#include <iostream>
#include <vector>

template <typename T>
void bubbleSort(std::vector <T>& vec)
{
	for (size_t i = 0; i < vec.size() - 1; ++i)
	{
		for (size_t j = 0; j < vec.size() - 1; ++j)
		{
			if (vec.at(j) > vec.at(j + 1))
				//zamiana miejscami
				// versja 1
			//	T tmp = vec.at(j);
			//vec.at(j) = vec.at(j + 1);
			//vec.at(j + 1) = temp;
				//versja 2
				std::swap(vec.at(j), vec.at(j + 1));


		}
	}
}

template <typename T>
void printVector(const std::vector <T>& vec)
{
	for (size_t i = 0; i < vec.size() - 1; ++i)
	{
		std::cout << "[" << i << "]=" << vec.at(i) << ";\n ";
	}
}


int main()
{
	std::vector <int> ints;

	//zad dom. utworz f. szabblonowa 
	//ktora wczytra do wektora dowolony typ
	int a = 0;

	do
	{
		std::cout << " podaj liczbe" << std::endl;
		std::cin >> a;
		
		ints.push_back(a);

	} while (a != 0);


	int sum = 0;

	for (int i = 0; i < ints.size(); ++i)
	{
		sum += ints[i];

	}
	std::cout << "suma podanych liczb to: " <<  sum << std::endl;

	for (int i = 0; i < ints.size(); ++i)
	{
			sum += ints[i];
		
	}
	std::cout << " suma podanych liczb w wektorze: " << sum << std::endl;

	bubbleSort(ints);
	printVector(ints);

}

