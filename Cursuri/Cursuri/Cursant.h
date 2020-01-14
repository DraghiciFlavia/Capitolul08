#pragma once
#include "Persoana.h"

class Cursant :
	public Persoana
{
private:
	double _notaTeme, _notaTeste, _notaProiect;
	bool HasGrades();
	bool IsAvrageOk();

public:
	Cursant(std::string, std::string, std::string);
	std::string GetNumeComplet() { return "Cursant:" + Persoana::GetNumeComplet(); }
	std::string Activitate();
	double SetTeme(double teme);
	double SetTeste(double teste);
	double SetProiect(double proiect);
	std::string Absolva();
};

