// ЛАбраб1задание2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include  < iostream >
#include  < cmath >


using namespace std;
int main()
{
	double x, y, z;

	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "z=";
	cin >> z;



	if ((x + y + z) < 1)
	{
		if (x<y && x<z)
		{
			x = (y + z) / 2;
			cout << x;
		}
		if (y<x && y<z)
		{
			y = (x + z) / 2;
			cout << y;
		}
		if (z<x && z<y)
		{
			z = (x + y) / 2;
			cout << z;
		};
	}
	else
	{
		if (x < y)
		{
			x = (y + z) / 2;
			cout << x;
		}
		else if (y < x)
		{
			y = (x + z) / 2;
			cout << y;
		}
	}
	return 0;
}

