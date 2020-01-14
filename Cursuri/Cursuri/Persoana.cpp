#include "Persoana.h"

Persoana::Persoana(std::string nume,std::string prenume,std::string materia):_nume(nume),_prenume(prenume),_materia(materia){}
std::string Persoana:: Activitate()
{
	return  " cursul";
}
std::string Persoana::SetNume(std::string nume) 
{ 
	_nume=nume;
	return nume; 
}
std::string Persoana::Setprenume(std::string prenume) 
{ 
	_prenume=prenume;
	return prenume; 
}
std::string Persoana::SetMateria(std::string materia) 
{ 
	_materia=materia;
	return materia; 
}