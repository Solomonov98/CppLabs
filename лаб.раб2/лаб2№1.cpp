// 
//1.	Дан массив натуральных чисел n размерности m (m вводится с клавиатуры) и массив действительных чисел x той же размерности. 
//      Вычислить (x1*n1+…+xm*nm)/(n1+…+nm).
#include <iostream>
using namespace std;
float s1, s2;
int main() {
	int m;
	cout << "m = ";
	cin >> m;
	int *arr1 = new int[m];  
	float *arr2 = new float[m];  
	for (int i = 0; i < m; i++) {
		cout << "arr1[" << i << "] = ";
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++) {
		cout << "arr2[" << i << "] = ";
		cin >> arr2[i];
	}
	for (int i = 0; i < m; i++) {
		s1 += arr1[i] * arr2[i];
		s2 += arr2[i];
	}
	cout << s1 / s2 << endl;
	delete[] arr1, arr2;
}

