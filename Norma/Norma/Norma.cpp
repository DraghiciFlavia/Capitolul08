#include <iostream>
#include "NormaProf.h"

int main()
{
	Clasa oclasa(11, 'C', 4);
	Clasa altaclasa(5, 'B', 5);
	Clasa ultimaclasa(9, 'A', 3);
	NormaProf Iudu(oclasa, altaclasa, ultimaclasa, fizica);
	std::cout << "Orarul este: "<<std::endl;
	Iudu.AfiseazaOre();
	std::cout << "Total ore: " << Iudu.CalculeazaTotalOre() << std::endl;
	NormaProf* mutu = new NormaProf(oclasa, altaclasa, ultimaclasa, fizica);
	
	std::cout<<std::endl;
	std::cout << "Orarul este: " << std::endl;
	mutu->AfiseazaOre();
	std::cout << "Total ore: " << mutu->CalculeazaTotalOre() << std::endl;

	delete mutu;
}


