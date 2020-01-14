#include "Janta.h"

Janta::Janta(): _nrPrezoane(5),_matJanta(aluminiu),_diametru(14){}

Janta::Janta(unsigned short prezoane , unsigned short diam, MatJanta mat):_nrPrezoane(prezoane),_diametru(diam), _matJanta(mat){}

void Janta::SchimbaJanta(MatJanta matJanta, unsigned short diametru)
{
	_matJanta = matJanta;
	_diametru = diametru;
}
