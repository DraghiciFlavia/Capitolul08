#include"Masina.h"
#include <iostream>

int main()
{
	Anvelopa cauc1;
	Janta  janta1;
	Roata rVara1(cauc1,janta1);
	Roata rVara2=rVara1 , rVara3 = rVara1, rVara4 = rVara1;
	Masina BMW(rVara1,rVara2,rVara3,rVara4);
	BMW.AfiseazaStareRoti("BMW-ul");
	BMW.AfiseazaTipCauciucuri("BMW-ul");

	Anvelopa cauc2("Hancook", 2.2, iarna);
	Janta  janta2(5, 14, tabla);
	Roata rIarna1(cauc2, janta2);
	Roata rIarna2 = rIarna1, rIarna3 = rIarna1, rIarna4 = rIarna1;
	BMW.SchimbaRoti(rIarna1, rIarna2, rIarna3, rIarna4);
	BMW.AfiseazaTipCauciucuri("BMW-ul ");
	Masina toyota(rIarna1, rIarna2, rIarna3, rIarna4);
	toyota.AfiseazaStareRoti("Toyota");
	toyota.AfiseazaTipCauciucuri("Toyota");
	toyota.UmflaRoata(1, 0.5);
	toyota.AfiseazaStareRoti(" Toyota");
	toyota.SchimbaRoata(1, rIarna1);
	toyota.AfiseazaStareRoti("Toyota");
	toyota.AfiseazaTipCauciucuri("Toyota");
}
