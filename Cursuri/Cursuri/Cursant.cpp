#include "Cursant.h"

double Cursant::SetTeme(double teme) 
{ 
	_notaTeme = teme;
	return teme; 
}
double Cursant::SetTeste(double teste) 
{ 
	_notaTeste = teste;
	return teste; 
}
double Cursant::SetProiect(double proiect) 
{ 
	_notaProiect = proiect;
	return proiect; 
}
bool Cursant::HasGrades()
{
	if (_notaTeme != 0 && _notaTeste != 0 && _notaProiect != 0)
		return true;
	else
		return false;

}

bool Cursant::IsAvrageOk()
{
	if((_notaProiect + _notaTeme + _notaTeste) / 3 >= 7) 
		return true;
	else
		return false;
}

Cursant::Cursant(std::string n, std::string p, std::string m):Persoana(n,p,m)
{
	_notaProiect = 0;
	_notaTeme = 0;
	_notaTeste = 0;
}
std::string Cursant::Activitate()
{
	return " studiaza " + Persoana::Activitate();
}
std::string Cursant::Absolva()
{
	if (HasGrades() == false)
		return "Nu are note suficiente\n";
	if (HasGrades() == true && IsAvrageOk() == false)
		return "Nu absolva\n";
	else if (HasGrades()==true && IsAvrageOk()==true)
		return "Absolva\n";	
}