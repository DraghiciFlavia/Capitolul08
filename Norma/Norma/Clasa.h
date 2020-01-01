#include<iostream>
class Clasa
{
private:
	unsigned short _an;
	char _litera;
	unsigned short _orePeSaptamana;
public:
	
	Clasa(unsigned short, char, unsigned short);
	void AfiseazaOre();
	unsigned short GetOre() { return _orePeSaptamana; }

};

