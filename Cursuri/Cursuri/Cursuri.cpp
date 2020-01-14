#include "Cursant.h"
#include "Mentor.h"

int main()
{
	Mentor thebest(" Dude ", "Dumb ", " Spalarea Aerului");
	std::cout<<thebest.Mentor::GetNumeComplet()<<std::endl;
	std::cout << thebest.GetNume() << thebest.Activitate() << thebest.GetMateria() << std::endl;
	Cursant chuck("Chuck ", "Noris ", " Spalarea Aerului");
	std::cout << chuck.GetNumeComplet()<<std::endl;
	std::cout << chuck.GetNume() << chuck.Activitate() << chuck.GetMateria() << std::endl;
	std::cout<<chuck.Absolva();
	chuck.SetProiect(7);
	chuck.SetTeme(6);
	chuck.SetTeste(6);
	std::cout << chuck.Absolva();
	thebest.SchimbaMentor("Dumber ", "Dude ");
	thebest.SchimbaMateria(" Numaratul oilor");
	std::cout << thebest.Mentor::GetNumeComplet() << std::endl; 
	std::cout << thebest.GetNume() << thebest.Activitate() << thebest.GetMateria() << std::endl;

	Cursant ObiWan(" Kenobi ", "Obi Wan ", " Numaratul oilor ");
	std::cout << ObiWan.GetNumeComplet() << std::endl;
	std::cout << ObiWan.GetNume() << ObiWan.Activitate() << ObiWan.GetMateria() << std::endl;
	std::cout<<ObiWan.Absolva();
	ObiWan.SetProiect(10);
	ObiWan.SetTeme(10);
	ObiWan.SetTeste(10);
	std::cout << ObiWan.Absolva();

}


