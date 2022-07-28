#pragma once

template <typename T, unsigned int N>
class StaticTable
{
public: 
	T& operator[](const unsigned int i);
	{//todo: wyjatek out_of_range gdy i>=N;
		return tab[i];
	}

	template <typename T2>
	void print(T2 separator)
	{
		//wypisuje cala tablice uzxywajac zmiennej t2 spearator hjako znaku rozdzielajacego warosci
	}

private:
	T tab[N];
	
};

template <unsigned int N>
class StaticTable<bool, N>
{

};


//template <typename T, unsigned int N>
//T& StaticTable::operator[](const unsigned int i)
//{
//	
//}

template<typename T, unsigned int N>
inline T& StaticTable<T, N>::operator[](const unsigned int i)
{
	// // O: insert return statement here
}
