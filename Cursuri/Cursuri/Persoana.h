#pragma once
#include <iostream>

class Persoana
{

public:
	Persoana(std::string, std::string, std::string);
	std::string Activitate();
	std::string GetNume() { return _prenume; }
	std::string GetMateria() { return _materia; }

protected:
	std::string GetNumeComplet() { return _prenume + _nume; }
	std::string SetNume(std::string nume);
	std::string Setprenume(std::string prenume);
	std::string SetMateria(std::string materia);

private:
	std::string _nume, _prenume, _materia;
};
