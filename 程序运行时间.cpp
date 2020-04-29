#include<iostream>
using namespace std;
int main(){
	int c1,c2;
	cin>>c1>>c2;
	int num = (c2-c1)/100;
	int c;
	c = (c2 - c1)%100;
	if(c>=50){
		c = 1;
	}else{
		c = 0;
	}
	int h,m,s;
	s = num%60+c;
	m = (num/60)%60;
	h = (num/3600);
	if(h<10){
		cout<<0;
	}
	cout<<h<<":";
	if(m<10){
		cout<<0;
	}
	cout<<m<<":";
	if(s<10){
		cout<<0;
	}
	cout<<s<<endl;
}



 
