// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	
	int x, y, z, a, b;
	double e = 2.7;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "z=";
	cin >> z;



	a = (1 + y) * ((x + y) / (pow(x, 2) + 4) / ((pow(e, -x - 2) + 1) / (pow(x, 2) + 4)));
	b = (1 + cos(y - 2)) / (pow(x, 4) / 2 + pow(sin(z), 2));
	

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	return 0;
}

