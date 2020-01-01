#include "Clasa.h"
#include<iostream>

enum Materie{ fizica, matematica, chimie, romana,sport};

class NormaProf
{
private:
	Materie _materie;
	Clasa _clasa1, _clasa2, _clasa3;

public:
	
	NormaProf(Clasa, Clasa, Clasa, Materie);
	void AfiseazaOre();
	unsigned short CalculeazaTotalOre();
};

