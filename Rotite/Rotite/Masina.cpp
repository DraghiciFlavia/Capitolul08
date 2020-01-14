#include "Masina.h"

Masina::Masina(Roata fs, Roata fd, Roata sd, Roata ss) :_roti{fs,fd,ss,sd}{}

short Masina::VerificaRoti()
{
	for (int i = 0; i < 4; ++i)
	{
		return _roti[i].IsFlat()? 1: -1;
	}
}
void Masina::AfiseazaStareRoti(std::string numeM)
{
	std::cout << numeM;
	short v;
	v = VerificaRoti();
	if (v < 0)
		std::cout << " are toate rotile in regula." << std::endl;
	else
		std::cout << " are pana la roata " << v + 1<<std::endl;
}

void Masina::UmflaRoti(double presiune)
{
	for (int i = 0; i < 4; ++i)
	{
		_roti[i].UmflaRoata(presiune);
	}
}

void Masina::UmflaRoata(short ind,double presiune)
{
	_roti[ind].UmflaRoata(presiune);
}

void Masina::SchimbaRoti(Roata fs, Roata fd, Roata ss, Roata sd)
{
	fs = _roti[0];
	fd = _roti[1];
	ss = _roti[2];
	sd = _roti[3];

}
void Masina::SchimbaRoata(short r,Roata roata)
{
	_roti[r] = roata;
}

void Masina::AfiseazaTipCauciucuri(std::string tip)
{
	std::cout << tip << " are cauciucuri ";
	/*for (int i = 0; i < 4; ++i)
	{
		_roti[i].GetTipAnvelopa();
	}*/
	
	if (_roti[0].GetTipAnvelopa() == _roti[1].GetTipAnvelopa() == _roti[2].GetTipAnvelopa() == _roti[3].GetTipAnvelopa())
	{
		int z = _roti[1].GetTipAnvelopa();
		switch (z)
		{
		case 0: std::cout << " iarna." << std::endl; break;
		case 1: std::cout << " vara." << std::endl; break;
		case 2:std::cout << " universal" << std::endl; break;
		}
	}
	else
		std::cout << " mixte" << std::endl;
	
}
