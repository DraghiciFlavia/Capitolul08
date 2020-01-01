#include "NormaProf.h"

NormaProf::NormaProf(Clasa clasa1, Clasa clasa2, Clasa clasa3, Materie m):_clasa1(clasa1), _clasa2(clasa2),_clasa3(clasa3), _materie(m){}

void NormaProf::AfiseazaOre()
{
	_clasa1.AfiseazaOre();
	_clasa2.AfiseazaOre();
	_clasa3.AfiseazaOre();
}
unsigned short NormaProf::CalculeazaTotalOre()
{
	return (_clasa1.GetOre() + _clasa2.GetOre() + _clasa3.GetOre());
}
