#include<iostream>
#include<string>
using namespace std;
int main(){
//	//unsigned long long a,b,q,r;
//	a=b=q=r=0;
//	cin>>a>>b;
//	r = a%b; 
//	q = a/b;
//	cout<<q<<" "<<r<<endl;

	string a;
	int b;
	int r=0;
	char q ;
	int current;
	
	cin>>a>>b;
	for(int i =0; i<a.length(); i++){
		current = (int)(a[i]-'0')+r*10;
		q = current/b + '0';
		r = current%b;
		if(q=='0' && i == 0)
		 continue;
		 else
		 cout<<q;
	}
	cout<<" ";
	cout<<r;
	
 return 0;   
}
