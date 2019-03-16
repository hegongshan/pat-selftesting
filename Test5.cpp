#include <iostream>
#include <string>
using namespace std;

void copy(string arr1[54],string arr2[54],int length) {
	for(int i=0;i<length;i++) {
		arr1[i] = arr2[i];
	}
}

int main()
{
	int k;
	cin >> k;
	string sArr[54] = {"S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
			"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
			"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
			"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
		"J1","J2"};
	int arr[54];
	for(int i=0;i<54;i++) {
		cin >> arr[i];
	}
	string sArr2[54];
	for(int i=0;i<k;i++) {
		copy(sArr2,sArr,54);
		for(int j=0;j<54;j++) {
			sArr[arr[j]-1] = sArr2[j];
		}
	}
	for(int i=0;i<54;i++) {
		cout << sArr[i];
		if(i != 53) {
			cout << " ";
		}
	}
}
