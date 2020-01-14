#include "Roata.h"

Roata::Roata(Anvelopa A,Janta J):_anvelopa(A),_janta(J){}

bool Roata::IsFlat()
{
	if (_anvelopa.GetPresiune() < 1)
		return true;
	else
		return false;
}
void Roata::SchimbaRoata(Anvelopa anv, Janta jan)
{
	anv = _anvelopa;
	jan = _janta;
}

void Roata::UmflaRoata(double presiune)
{
	_anvelopa.UmflaAnvelopa(presiune);
}