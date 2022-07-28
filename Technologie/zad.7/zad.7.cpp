//Napisz funkcjê "void arrayStatistic(int arr[], int size, double& average, double& min, double& max)", która wyliczy :
// *œredni¹ arytmetyczn¹ liczb w tablicy
//* wartoœæ najwiêksz¹
//* wartoœæ najmniejsz¹
//* jeœli to mo¿liwe utwórz sobie funkcjê pomocnicze

#include <iostream>




//void creatTable(int tab[], int s)
//{
//	std::cout << "podaj liczbe" << std::endl;
//
//	for (int i = 0; i < s; ++i)
//	{
//		std::cin >> tab[i];
//	}
//
//	std::cout << "twoja tablica to" << std::endl;
//
//	for (int i = 0; i < s; ++i)
//	{
//		std::cout << tab[i] << ", ";
//	}
//}

double averageCheck(int tab[], int s)
{
	double sum = 0.0;

	for (int i = 0; i < s; ++i)
	{
		sum += tab[i];
	}

	double result = (sum / s);

	return result;
}

double minCheck(int tab[], int s)
{
	double min = tab[0];
	for (int i = 0; i < s; ++i)
	{
		if (tab[i]<tab[i+1])
		{
			min = tab[i];
		}
	}
	return min;
}

double maxCheck(int tab[], int s)
{
	double max = tab[0];
	for (int i = 0; i < s; ++i)
	{
		if (max < tab[i+1])
		{
			max = tab[i + 1];
		}
	}
	return max;
}

void arrayStatistic(int arr[], int s, double& average, double& min, double& max)
{
	std::cout << "podaj liczbe" << std::endl;
	
		for (int i = 0; i < s; ++i)
		{
			std::cin >> arr[i];
		}
	
		std::cout << "twoja tablica to" << std::endl;
	
		for (int i = 0; i < s; ++i)
		{
			std::cout << arr[i] << ", ";
		}

		std::cout<<std::endl <<"srednia to:" << average<<std::endl;
		std::cout<<std::endl <<"najmiejszy element tablicy to:" << min<<std::endl;
		std::cout<<std::endl <<"najwiekszy element tablicy to:" << max<<std::endl;
		
}

int main()
{
	const int size = 5;
	int table[size] = {1,1,10,2,1};
	double& avr = averageCheck(table  , size);
	double& mini = minCheck(table, size);
	double& maxi = maxCheck(table, size);


	arrayStatistic(table, size, avr, mini, maxi);




}