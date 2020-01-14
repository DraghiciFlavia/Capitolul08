#pragma once
#include "Persoana.h"

class Mentor :
	public Persoana
{
public:
	Mentor(std:: string, std::string, std::string);
	std::string GetNumeComplet() { return "Mentor: " + Persoana::GetNumeComplet(); }
	std::string Activitate();
	void SchimbaMateria(std::string);
	void SchimbaMentor(std::string, std::string);
};

