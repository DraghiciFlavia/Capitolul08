#include "Cilindru.h"
#include <iostream>
using namespace std;

int main()
{
	Cilindru chilly(2, 5);
	cout << "Volumul lui chilly este " << chilly.Volum() << endl;
	cout << "Aria lui chilly este " << chilly.ArieCilindru() << endl;
	Cilindru* hipster = new Cilindru[2]{ Cilindru(2,5), Cilindru(5,2) };
	cout << "Volumul primului hipster este " << hipster[0].Volum() << endl;
	cout << "Aria primului hipster este " << hipster[0].ArieCilindru() << endl;
	cout << "Volumul celui de-al doilea hipster este " << hipster[1].Volum() << endl;
	cout << "Aria celui de-al doilea hipster este " << hipster[1].ArieCilindru() << endl;
	delete[] hipster;
}


