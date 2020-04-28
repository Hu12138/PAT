#include<iostream>
#include<string>
#include<math.h> 
using namespace std;
int main(){
	string a,a1,b,b1;
	cin>>a>>a1>>b>>b1;
	int i ,counta =0;
	int countb=0;
	int pa = 0;
	int pb = 0;
	for( i = 0; i<a.length();i++){
		if(a[i] == a1[0]){
			counta++;
			pa +=(int)(a1[0] - '0')*pow(10,counta-1);
		}
	}
	for( i = 0; i<b.length();i++){
		if(b[i] == b1[0]){
			countb++;
			pb +=(int)(b1[0] - '0')*pow(10,countb-1);
		}
	}
	cout<<pa+pb<<endl;
 return 0;   
}
