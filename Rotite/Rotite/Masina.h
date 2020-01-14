#include "Roata.h"
#include<iostream>


class Masina
{
private:
	Roata _roti[4];
	
	short VerificaRoti();

public:
	Masina(Roata, Roata, Roata , Roata);
	void AfiseazaStareRoti(std::string);
	void UmflaRoti(double presiune);
	void UmflaRoata(short ind, double presiune); 
	void SchimbaRoti(Roata fs, Roata fd, Roata ss, Roata sd);
	void SchimbaRoata(short r, Roata roata);
	void AfiseazaTipCauciucuri(std::string);
};

