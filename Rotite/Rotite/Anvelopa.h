#include <iostream>

enum  TipAnvelopa{iarna, vara, universal};

class Anvelopa
{
private:
	std::string _brand;
	double _presiune;
	TipAnvelopa _tipAnvelopa;

public:
	Anvelopa();
	Anvelopa(std::string, double, TipAnvelopa);
	double GetPresiune() { return _presiune; } 
	TipAnvelopa GetTipA() { return _tipAnvelopa; }
	void UmflaAnvelopa(double);
};
