// zadanie 37a rok przystepny

#include <iostream>

bool Checkfebruary(int year)
{

	int wynik = year % 4;
	int wynik_2 = year % 100;

	if ((wynik == 0) && (wynik_2 != 0))
	{
		return true;
	}
	else

		return false;
}


bool checkDay(int day, int maxValue)
{
	if (day > 0 && day <= maxValue)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool checkDate(int year, int month, int day)
{
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
			return checkDay(day, 31);
			break;
		case 2:
			if (Checkfebruary == 0)
			{
				return checkDay(day, 29);
			}
			else
			{
				return checkDay(day, 28);
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return checkDay(day, 30);
			break;
		default:
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool checkDate2(int year, int month, int day)
{
	bool isDateCorrect = false;
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
			isDateCorrect = checkDay(day, 31);
			break;
		case 2:
			isDateCorrect = checkDay(day, 28);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			isDateCorrect = checkDay(day, 30);
			break;
		default:
			isDateCorrect = false;
		}
	}
	else
	{
		isDateCorrect = false;
	}
	return isDateCorrect;
}
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


	std::cout << "Poprawnosc daty:" << checkDate(year, month, day);

}
