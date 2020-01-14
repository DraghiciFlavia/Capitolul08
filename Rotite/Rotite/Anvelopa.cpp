#include "Anvelopa.h"

Anvelopa::Anvelopa()
{
	_brand = "Michelin";
	_presiune = 2.2;
	_tipAnvelopa = vara;
}

Anvelopa::Anvelopa(std::string marca, double p, TipAnvelopa t) :_brand(marca),_presiune(p),_tipAnvelopa(t){}

void Anvelopa::UmflaAnvelopa(double pr)
{

	if (pr > 3)
		_presiune = 3.0;
	else
		pr=_presiune;
}