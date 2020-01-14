#include <iostream>
#include"Anvelopa.h"
#include "Janta.h"


class Roata
{
private:
	Anvelopa _anvelopa;
	Janta _janta;
public:

	Roata( Anvelopa, Janta);
	bool IsFlat();
	void SchimbaRoata(Anvelopa, Janta);
	void UmflaRoata(double);
	TipAnvelopa GetTipAnvelopa() { return _anvelopa.GetTipA(); }
};

