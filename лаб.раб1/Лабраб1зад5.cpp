// Лабраб1зад5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double result = 0;
	cin >> n;
	for (int i=1; i <= n; i++)
	{
		double result1 = 0;
		for (int j=1; j<=i; j++)
		{
			result1 += sin(j); 
		}
		result += 1 / result1;
	}
	cout << result << endl;
    return 0;
}

