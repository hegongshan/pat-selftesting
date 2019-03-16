#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	 //直接法
	 /*for (int i = 0; i < m; i++) {
		 int temp = arr[n - 1];
		 for (int j = n - 2; j >= 0; j--) {
		 	 arr[j + 1] = arr[j];
		 }
		 arr[0] = temp;
	 }

	 for (int i = 0; i < n; i++) {
		 cout << arr[i];
		 if (i != n - 1) {
		 	 cout << " ";
		 }
	 }*/

	//反转法
	if (m > n) {
		m = m % n;
	}
	int temp = 0;
	for (int i = 0; i < (n - m) / 2; i++) {
		temp = arr[n - m - i - 1];
		arr[n - m - i - 1] = arr[i];
		arr[i] = temp;
	}
	for (int i = n - m; i < n - m / 2; i++) {
		temp = arr[2 * n - m - i - 1];
		arr[2 * n - m - i - 1] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < n / 2; i++) {
		temp = arr[n - i - 1];
		arr[n - i - 1] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1) {
			cout << " ";
		}
	}
}

