#include "Clasa.h"

Clasa::Clasa(unsigned short an, char litera, unsigned short ore):_an(an),_litera(litera),_orePeSaptamana(ore){}

void Clasa::AfiseazaOre()
{
	std::cout << "Clasa a " << _an << _litera << " : " << _orePeSaptamana << " ore/saptamana" << std::endl;

}