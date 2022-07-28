#include "vector.h"

Vector::Vector()
	: _size(0)
	, _capacity(0)
	, _data(0)
{
}

Vector::Vector(unsigned int capacity)
	:_size(0)
	, _capacity(capacity)

{
	_data = new int[_capacity];
}

Vector::~Vector()
{
	if (_data != nullptr)   // chodzi o to zeby nie usuwac nllptr jest to raczej standard! 
	{
		delete[] _data;
		_data = nullptr; 
	}
}

void Vector::reserve(unsigned int capacity)
{
	int* data = new int[capacity]; //nowa tab

	for (int i = 0; i < _size; i++)  //kopiowanie do nowej tab
	{
		data[i] = _data[i];
	}
	_capacity = capacity;
	delete[] _data;
	_data = data;

}

unsigned int Vector::capacity() const
{
	 	return _capacity;
}

unsigned int Vector::size() const
{
	return _size;
}

bool Vector::empty() const
{
	return _size == 0;
}

void Vector::clear()
{
	_size = 0;
}


int& Vector :: operator[] (unsigned int position)
{
		if (position > _size)
		{

			//todo:exception dowiemy sie w pozniejszej nauce
		}

		return _data[position];
}


void Vector::push_back(const int& value)
{
	if (_size >= _capacity) //dodawanie pamieci
	{
		reserve((_capacity + 1) * 2);  ///jest dodac +1 bo inaczej metoda reserved nie zadziala. bedzie 0.
	}
	
	_data[_size++] = value;
}
