#include <iostream>
using namespace std;

int main()
{
	float c = 1.2;
	double d = 4;
	int a = 5;
	int b = -10;
	long l = 10000;
    float floatedNumber = l / c;
	float integerPart = floatedNumber;

	a = a++;

	double result = integerPart * b - c / d;
	cout << result<<endl;
	system("pause");
	return 0;
}