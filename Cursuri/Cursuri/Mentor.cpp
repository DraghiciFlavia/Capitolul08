#include "Mentor.h"

Mentor::Mentor(std::string n, std::string p, std::string m):Persoana::Persoana(n,p,m){}

std::string Mentor::Activitate()
{
	return  " preda " + Persoana::Activitate();
}

void Mentor::SchimbaMateria(std::string Materia)
{
	SetMateria(Materia);
}

void Mentor::SchimbaMentor(std::string Prenume, std::string Nume)
{
	 Setprenume(Prenume);
	 SetNume(Nume);
}