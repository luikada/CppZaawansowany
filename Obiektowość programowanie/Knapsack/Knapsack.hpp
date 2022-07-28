#pragma once

struct Item
{
	int weight; //kg
	int value;
};

class Shop
{
	Item items[100];
public:
	Shop(); // konstruktor powinien wypelniac tablice przedmiotow - losowymi przedmiotami
	Item steal(int index); //kradnij - odejmij od tablicy
	Item peek(int index); //zajrzyj - sprawdz nie zabieraj ze sklepu
};
class Backpack
{
	const int capacity; //15kg
	Item stolen[100];
	//int value;
public:
	Backpack(int capacity); //zainicjalizowac naszego consta (lista inicjalizujaca)
	int calculateCurrentValue(); // zwraca wartosc plecaka
	int put(Item item); // zwraca ile miejsca zostalo w plecaku
};
class Robber
{
	Backpack& backpack; //plecak powininen byc skonstruowany w konstruktorze zlodzieja
public:
	Robber(int capacity); //powinien zainicjalizowac plecak odpowiednia pojemnoscia
	//sklep powinien byc przekazany do zlodzieja
	void robWhatever(Shop& shop); //logika 1 - pierwsze lepsze
	//void robRandom(); //losowo
	//void robGreedy(); //logika 2 - wg efektywnosci
	int getValue();
};
