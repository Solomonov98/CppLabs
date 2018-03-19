//2.	Дан массив размерности n. Если отрицательные и положительные элементы в массиве чередуются (+ - + - + … или - + - + - + …) 
//заменить максимальные элементы минимальными, иначе – наоборот.


#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int mx = 0;
	int mn = 0;
	int k = 0;
	cout << "n=";
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	mn = arr[0];
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] * arr[i + 1] < 0) {
			k++;
		}
		else {
			k = 0;
			break;
		}
	}
	for (int i = 0; i<n; i++)
	{
		if (arr[i]>mx) {
			mx = arr[i];
		}
	}
	for (int i = 0; i<n; i++)
	{
		if (arr[i]<mn) {
			mn = arr[i];
		}
	}
	if (k > 0) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == mx) {
				arr[i] = mn;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (arr[i] == mn) {
				arr[i] = mx;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
}
