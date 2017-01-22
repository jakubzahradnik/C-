#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	int wyb=1;
	while (wyb != 3)
	{
		system("cls");
		cout << "--------------------------\n1. Dodawanie\n2. Odejmowanie\n3. Zakoäcz\n--------------------------\n";
		// wyb=_getch(); zamiast cin >> wyb, spodowuje wybranie opcji bez entera
		if (!cin >> wyb); // sprawdza czy user nie poda nie inta, wywala bĄd na ekran i zamyka program;
		{
			cerr << "To nie jest liczba!!\n"; //przekierowanie b©du na ekran
			exit(0);
		}
		switch (wyb)
		{
		case 1: 
		{
			system("cls");
			cout << "Podaj dwie liczby: " << endl;
			int a, b;
			cin >> a; cin >> b;
			system("cls");
			cout << a + b << endl;
			system("pause");
		}break;
		case 2:
		{
			system("cls");
			cout << "Podaj dwie liczby: " << endl;
			int a, b;
			cin >> a; cin >> b;
			system("cls");
			cout << a - b << endl;
			system("pause");
		}break;
		case 3: exit(0);
		default: break;
		}
	}
	

}

