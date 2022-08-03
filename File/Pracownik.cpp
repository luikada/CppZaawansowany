#include "Pracownik.h"

Pracownik::Pracownik()
{
	std::random_device r; 
	std::default_random_engine defEngine(r()); 
	std::uniform_int_distribution<int> intDistro(0, 20); 
	this->_idx = intDistro(defEngine);

}

Pracownik::Pracownik(const Pracownik& old)
{
	_idx = old._idx;
}

Pracownik::~Pracownik()
{

}



