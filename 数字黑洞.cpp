
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
string sub1(string down, string up) {
	int sum_down, sum_up;
	sum_down = sum_up = 0;
	for (int i = 0; i < down.length(); i++) {
		sum_down += (down[i] - '0') * pow(10, (down.length()-1 - i));
		sum_up += (up[i] - '0') * pow(10, (down.length() -1- i));
	}
	int result;
	
	cout << down << " " << '-' <<' '<< up << " " << '=' << " ";
	result = sum_down - sum_up;
	cout << result<<endl;
	string str = "0000";
	int index = 0;//string数组下标 
	while (result != 0) {
		int temp;
		temp = result % 10;
		str[index++] = '0' + temp;
		result = result / 10;
	}
		reverse(str.begin(),str.end());
	return str;
}
int main() {
	string str;
	cin >> str;
	while (str.size() < 4)
		str += "0";
	sort(str.begin(), str.end());
	string up, down;
	up = str;
	reverse(str.begin(), str.end());
	down = str;
	if (down == up) {
		cout << down << " " << "-" << " " << up << " " << "=" << " " << "0000";
		return 0;
	}
	str = sub1(down, up);
	while (str != "6174")
	{
		sort(str.begin(), str.end());
		string up, down;
		up = str;
		reverse(str.begin(), str.end());
		down = str;
		str = sub1(down, up);
	}
	
	return 0;
}

