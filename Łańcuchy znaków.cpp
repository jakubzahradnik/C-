#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

void kobieta_czy_facet()
{
	/*---------------------------------------
	SPRAWDZENIE CZY KOBIETA CZY FACET PO OSTATNIEJ LITERCE IMIENIA
	-----------------------------------------*/
	string imie;
	cin >> imie;

	int dlugosc_slowa = imie.length();  //dˆugo˜† sˆowa
	cout << dlugosc_slowa << endl;
	if (imie[dlugosc_slowa - 1] == 'a')
		cout << "\nKobieta\n";
	else
		cout << "\nM©¾czyzna\n";
	system("pause");
}

void odwrocenie_slowa()
{
	string wyraz;
	cout << "Podaj wyraz do odw¢rcenia\n";
	/*cin >> wyraz;                CIN POBIERZE WYRAZ DO SPACJI,PO NIEJ UZNA, ½E DALEJ NIE MA ZDANIA*/

	getline(cin, wyraz);			// getline (cin, zmienna) pobierze cale zdanie

	int len = wyraz.length();

	for (int i = len - 1; i >= 0; i--)
	{
		cout << wyraz[i];
	}
	cout << endl;
}

void sklejanie_stringow() 
{
	string jeden = "Ala ma ";
	string dwa = "kota";

	string trzy = jeden + dwa;
	cout << trzy << endl;
}

void zmiana_wielkosci_liter() //wymaga #include <algorithm>
{
	string napis = "Ala ma kota";

	transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
	cout << napis<< endl;

	transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
	cout << napis << endl;
}

void znajowanie_frazy_w_lancuchu()
{
	string napis = "Ala ma kota";
	string szukaj = "kot";

	size_t pozycja = napis.find(szukaj);

	if (pozycja != string::npos)
		cout << "Znaleziono na pozycji: " << pozycja;
	else cout << "\nNie znaleziono\n";
}

void zastapienie_czesci_lancucha()
{
	string napis = "Ala ma kota";
	napis.replace(4, 2, "nie ma");
	cout << napis;
}
int main()
{
	//kobieta_czy_facet();
	//odwrocenie_slowa();
	//sklejanie_stringow();
	//zmiana_wielkosci_liter();
	//znajowanie_frazy_w_lancuchu();
	zastapienie_czesci_lancucha();
	cout << endl;
	system("pause");
}

