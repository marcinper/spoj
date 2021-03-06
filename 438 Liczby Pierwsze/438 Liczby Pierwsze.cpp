// 438 Liczby Pierwsze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool czy_pierwsza(int n)
{
	if (n<2)     return false;   //gdy liczba jest mniejsza niż 2 to nie jest pierwszą

	for (int i = 2; i*i <= n; i++)
		//****************************************************************************/
		// Aby określić, czy dana liczba jest pierwsza należy zbadać jej dzielniki.
		// Dla zadanej liczby n sprawdzamy kolejne liczby naturalne należące do przedziału:[2...n√]
		// Jeśli któraś z tych liczb jest dzielnikiem, oznacza to, że nasza liczba nie jest pierwsza.
		// Dlaczego wystarczy sprawdzić tylko liczby od 2 do pierwiastka z n?
		// Odp: http://www.algorytm.edu.pl/algorytmy-maturalne/badanie-czy-liczba-pierwsza.html */
		//*****************************************************************************/
		if (n%i == 0)
			return false;       //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

int main()
{
	int liczba_testow, n;
	cin >> liczba_testow;

	for (int i = 0; i<liczba_testow; i++)
	{
		cin >> n;
		if (czy_pierwsza(n) == 1)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	return 0;
}


