#include <iostream>
#include "math.h"
#include <string>
#include <algorithm>
//#include <stack>
using namespace std;
void mod(long long,long long);
int main(){
	long long a , b,d;
	cin>>a>>b>>d;
	long long sum ;
	sum = a+b;
	mod(sum,d);
//	cout<<mod(sum,d)<<endl;
	return 0;
}
void mod(long long sum,long long d){
	//stack<char> sta;
	long long r,index;//r is remainder , numeric index
	r = index = 0;
	//long long all = 0;
	char result = '0';
	string str("");
	while(sum){
		
		r = sum%d;//get remainder
		//all += r*pow(10,index++);//overstep the boundary
		result = r + '0';
		//sta.push(result);
		//cout<<result;
		str.push_back(result);
		sum = sum/d;
	}
	std::reverse(str.begin(),str.end());
	cout<<str;
	//return all;
}
