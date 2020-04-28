#include<iostream>
#include<stdio.h>
#include "malloc.h"
using namespace std;
 struct result{
	int V;//Ó® 
	int S;//Æ½ 
	int F;//Êä 
	int Vj ;
	int Vc ;
	int Vb ;
};
int judge(char a, char b){
	if(a == 'J'){
		if(b == 'J')
		return 0;
		else if(b == 'B')
		return 1;
		else if(b == 'C')
		return -1;
	}else if(a == 'C'){
		if(b == 'J')
		return 1;
		else if(b == 'B')
		return -1;
		else if(b == 'C')
		return 0;
	}else if(a == 'B'){
		if(b == 'J')
		return -1;
		else if(b == 'B')
		return 0;
		else if(b == 'C')
		return 1;
	}
}
char re(result a){
	if(a.Vb>=a.Vc && a.Vb>=a.Vj)
	return 'B';
	if(a.Vc>a.Vb && a.Vc>=a.Vj)
	return 'C';
	if(a.Vj>a.Vb && a.Vj>a.Vc)
	return 'J';
}
int main(){
	int n;
	char test[1000][2];
	cin>>n;
	int i = 0;
	for(i = 0; i<n; i++){
		cin>>test[i][0]>>test[i][1];
	}
	result a,b;
	a.F=a.S=a.V=a.Vb=a.Vc=a.Vj=0;
	b.F=b.S=b.V=b.Vb=b.Vc=b.Vj=0;
	for(i = 0; i<n;i++){
		int tmp = judge(test[i][0],test[i][1]);
		if(tmp == 1)
		{
			a.V++;
			b.F++;
			if(test[i][0] == 'J')
			a.Vj++;
			else if(test[i][0] == 'C')
			a.Vc++;
			else if(test[i][0] == 'B')
			a.Vb++;
		}else if(tmp == -1){
			a.F++;
			b.V++;
			if(test[i][1] == 'J')
			b.Vj++;
			else if(test[i][1] == 'C')
			b.Vc++;
			else if(test[i][1] == 'B')
			b.Vb++;
		}else if(tmp == 0){
			a.S++;
			b.S++;
		}
	}
	cout<<a.V<<" "<<a.S<<" "<<a.F<<"\n";
	cout<<b.V<<" "<<b.S<<" "<<b.F<<endl;
	cout<<re(a)<<" "<<re(b);
	
 return 0;   
}
