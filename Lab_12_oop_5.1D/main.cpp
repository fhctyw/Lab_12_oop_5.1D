#include <iostream>
#include <Windows.h>
#include "Rational.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try
	{
		int f, s;
		cin >> f;
		cin >> s;
		Rational r(f, s);
	}
	catch (RationalException r)
	{
		cout << "RationalException " << r.what() << endl;
	}

	try
	{
		Rational r;
		cin >> r;
	}
	catch (exception& e)
	{
		cout << "exception& " << e.what() << endl;
	}

	try
	{
		Rational r;
		r.setB(0);
	}
	catch (int* n)
	{
		cout << "int* " << *n << endl;
	}

	return 0;
}