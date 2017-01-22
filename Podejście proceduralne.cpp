#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;

double ile_cali(double m);
double ile_jardow(double m);
double ile_stop(double m);
int main()
{
	double metry;
	cout << "Podaj ile metrów przekonwertowaæ: ";
	cin >> metry;
	cout << "Na cale: " << ile_cali(metry) << endl;
	cout << "Na jardy: " << ile_jardow(metry) << endl;
	cout << "Na stopy: " << ile_stop(metry) << endl;
	system("pause");
    return 0;
}

double ile_cali(double m)
{
	return m*39.37;
}

double ile_jardow(double m)
{
	return m*1.0936;
}

double ile_stop(double m)
{
	return m;
}
