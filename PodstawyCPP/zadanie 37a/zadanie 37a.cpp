// zadanie 37a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


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
			return checkDay(day, 28);
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