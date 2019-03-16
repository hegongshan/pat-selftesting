
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	char c;
	cin >> n >> c;
	int x = sqrt((n+1)/2);
	int r = n- (2*pow(x,2)-1);
	for(int i=x;i>0;i--) {
		for(int j =0;j<x-i;j++) {
			cout << " ";
		}
		for(int j=0;j<2*i-1;j++) {
			cout << c ;
		}
		cout << endl;
	}
	for(int i=2;i<=x;i++) {
		for(int j =0;j<x-i;j++) {
			cout << " ";
		}
		for(int j=0;j<2*i-1;j++) {
			cout << c ;
		}
		cout << endl;
	}
	cout <<r;
	return 0;
}
