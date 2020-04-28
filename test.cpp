#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
string sub1(string down , string up){
	int sum_down,sum_up;
	sum_down = sum_up =0;
	for(int i = 0; i<down.length(); i++){
		sum_down += (down[i]-'0')*pow(10,(down.length() - i)) ;
		sum_up += (up[i] - '0')*pow(10,(down.length()-i));
	}
	int result ;
	result = sum_down - sum_up;
	string str = "oooo";
	int index =0;//string数组下标 
	while(result != 0){
		int temp;
		temp = result % 10;
		str[index++] = '0'+temp;
		result = result/10;
	}
//	reverse(str.begin(),str.end());
	return str;
}
int main(){
	string str ;
	cin>>str;
	
	sort(str.begin(),str.end());
	string up , down;
	up = str;
	reverse(str.begin(),str.end());
	down = str;
	
	cout<<down<<endl;
	str =  sub1(down,up);
	cout<<str<<endl;
	return 0;
} 
