#include <iostream>

enum  MatJanta { tabla, aluminiu };

class Janta
{
	
private:
	
	unsigned short _nrPrezoane;
	MatJanta _matJanta;
	unsigned short _diametru;

public:
	Janta();
	Janta(unsigned short, unsigned short, MatJanta);
	void SchimbaJanta(MatJanta, unsigned short);
};

