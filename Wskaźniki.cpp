#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

float srednia(float *a, int ile)
{
	float suma = 0;
	for (int i = 0; i < ile; i++)
	{
		suma += *a;
		a++;
	}
	return suma / ile;
}
int main()
{
	//zmienna wskaznikowa
	int liczba = 6;
	int *w = &liczba;
	cout << "*w: " << *w << "\nw: " << w << endl; //gwwiazda pokaze liczbe ukryt¹ pod liczba, a bez gwiazdki pokaze adres <- DLA ZMIENNEJ
	system("pause");

	//tablica dynamiczna
	int *tablica;
	tablica = new int[liczba];

	for (int i = 0; i < liczba; i++)
	{
		cout << *tablica << endl;
		tablica++;
	}
	system("pause");

	delete[] tablica;

	float tab[3] = { 1.5,2.3,0.75 };
	cout << "Œrednia: " << srednia(tab, 3) << endl;
	system("pause");
	return 0;
}

