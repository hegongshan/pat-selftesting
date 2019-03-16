#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*解题思想参考自：https://blog.csdn.net/vir_lee/article/details/80357287*/
int ht[10] = {0};
string doubleString(string str) {
	string result = "";
	// carry 进位
	int data = 0,carry = 0,r;
	for(int i=str.size()-1;i>=0;i--) {
		data = str[i]-'0';
		ht[data]++;
		r = data * 2 + carry;
		carry = r / 10;
		ht[r % 10]--;
		result += (r%10+'0');
	}
	//若比原来的数字多了一位
	if(carry != 0) {
		result += (carry +'0');
		ht[carry]--;
	}
	reverse(result.begin(),result.end());
	return result;
}

int main()
{
	string n;
	cin >> n;
	string result = doubleString(n);
	bool flag = true;
	for(int i=0;i<10;i++) {
		if(ht[i] != 0) {
			flag = false;
			cout << "No" << endl;
			break;
		}
	}
	if(flag) {
		cout << "Yes" << endl;
	}
	cout << result;
	return 0;
}

