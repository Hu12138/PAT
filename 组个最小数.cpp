#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string str("");
	//char ch;
	int nums;
	int n = 0;
	while(n<10){
		cin>>nums;
		if(nums>0){
			for(int i=0; i<nums; i++){
				char c = n+'0';
				str.push_back(c);
			}
		}
		n++;
	}
	sort(str.begin(),str.end());
	for(int i = 0; i<str.length();i++){
		if(str[i] != '0'){
			swap(str[0],str[i]);
			break;
		}
	}
	cout<<str;
}
