<<<<<<< HEAD:Лабараторная работа 3/Лабараторная работа 3/Лабараторная работа3.cpp
// 10. � ��������� ����� INPUT.TXT �������� ����� ����� ����� ������, ��������, � ��������� �����. �� ���� �������� ����� ������������ ������ ���� �����.
// ���������� ���������� ������� ��������� � ������. ��������� ����� �������� � ����� ��������� ������. ���������� ������ ������� � ��������� ���� OUTPUT.TXT.
#include <fstream>
=======
//1.	В текстовом файле INPUT.TXT записаны целые числа через пробел, возможно, в несколько строк. За один просмотр файла сформировать список этих чисел.
//Определить количество нулевых элементов в списке. Найденное число вставить в конец исходного списка. Полученный список занести в текстовый файл OUTPUT.TXT.
>>>>>>> master:Lab3Var10/laba3.cpp
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
	int *mas = (int*)calloc(10000, sizeof(int));
	ifstream input("input.txt");
	int len = 0, symbol = 0;
	if (input)
	{
		int zeros = 0;
		while (!input.eof())
		{
			input >> symbol;
			if (symbol == 0)
			{
				zeros++;
			}
			mas[len] = symbol;
			len++;
		}
		mas[len] = zeros;
		len++;
	}
	else
	{
		cout << "No file input.txt" << endl;
	}
	ofstream output("output.txt");
	for (int j = 0; j < len; j++)
	{
		output << mas[j] << " ";
	}
	delete mas;
	input.close();
	output.close();
	return 0;
}
