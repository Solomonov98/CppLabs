//������������ ������ �����.������� �������� ����� �����, ���� ����� �������������, � ����� ���� �����, ���� ����� �������������
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(0, "");
	int n;
	cout << "������� �����:\n"<<"n=";
	cin  >> n;
	if (n > 0) {
		int factor = 1;
		for (int i=1 ; i <= n; i += 1)
			factor *= i ;
		cout <<"����� �������������\n"<<"!n="<<factor<<endl;
}
	else {
		
		int sum = 0;
		n = abs(n);
		while (n != 0) {
		    sum += n % 10;
			n /= 10;
		}
		cout <<"����� ������������\n"<<"����� ���� �����="<< sum << endl;
	}
	
	system("pause");
	return 0;
}