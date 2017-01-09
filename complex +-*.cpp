#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct complex
{
	float Re;
	float Im;
};

void suma(complex z1, complex z2, complex &z3)
{
	z3.Re = z1.Re + z2.Re;
	z3.Im = z1.Im + z2.Im;
	cout << z3.Re << " + " << z3.Im << "i";
}
void roznica(complex z1, complex z2, complex &z3)
{
	z3.Re = z1.Re - z2.Re;
	z3.Im = z1.Im - z2.Im;
	cout << z3.Re << " + " << z3.Im << "i";
}
void mnoľenie(complex z1, complex z2, complex &z3)
{
	z3.Re = (z1.Re*z2.Re) + (z1.Im*z2.Im);
	z3.Im = (z1.Im*z2.Re) + (z1.Re*z2.Im);
	if (z3.Im<0) cout << z3.Re << z3.Im << "i";
	else cout << z3.Re << " + " << z3.Im << "i";
}

int main()
{
	complex z1, z2, z3;
	cout << "Podaj liczb© z1.Re, z1.Im\n";
	cin >> z1.Re >> z1.Im;
	cout << "\nPodaj liczb© z2.Re, z2.Im\n";
	cin >> z2.Re >> z2.Im;
	cout << "Wynik: ";
	/*suma(z1, z2, z3);*/
	cout << endl;
	mnoľenie(z1, z2, z3);
	cout << endl;
	system("pause");
	return 0;
}
