#include "Cilindru.h"




Cilindru::Cilindru(double r, double inaltime) :_baza(r), _inaltime(inaltime) {};

double Cilindru::Volum()
{
	return _baza.Arie() * _inaltime;
}

double Cilindru::ArieCilindru()
{
	return (2 * _baza.Arie()) + 2 * 3.14 * _inaltime * _baza.GetRaza();
}