
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x)
{
	if(x == 2 || x == 3) {
		return true;
	}
	int i=2;
	while(i <= sqrt(x)) {
		if(x % i == 0) {
			return false;
		}
		i++;
	}
	return true;
}

int main()
{
	int n ;
	cin >> n;
	int count = 0;
	for(int i=2;i<n;i++) {
		if(isPrime(i) && isPrime(i+2)) {
			count++;
		}
	}
	cout << count;
	return 0;
}

