// Лабраб1зад4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int c = 1;
	int sm = 0;
	while (c != 0)
	{ 
		cin >> c;
		if (c % 10 == 0 || (c%10) % 2 != 0)
		{
			sm = sm + c;
		}
		if (c == 0)
		{
			cout << sm << endl;
			return 0;
		}
	}
    return 0;
}

