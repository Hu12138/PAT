#include<iostream>
#include<string>
using namespace std;


int main(){
	string date[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN" };
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	//cout<<str1<<endl<<str2<<endl;
	int tag[2] ={-1};
	int dd;
	int h;
	int m;
	for(int i = 0; i<60; i++){
		if(a[i] == b[i] && a[i] >= 'A' && a[i]<='Z' && tag[0] <0){
			dd = i;
			tag[0] = 1;
			continue;	
		}
		if(tag[0] >0){
			if(a[i] == b[i]){
				if(a[i] >= 'A' and a[i]<='Z'){
					h = a[i] - 'A' + 10;
				}else{
					h = a[i] - '0';
				}
				break;
			}
		}
	}
	
	for(int j = 0; j<60; j++){
		
		if(c[j] == d[j] && (('a' <= c[j] && c[j] <= 'z') || ('A' <= c[j] && c[j] <= 'Z'))){
			m = j;
			break;
		}
		
	}
	cout<<date[a[dd]-'A']<<" ";
		if(h<10){
		cout<<"0"<<h;
	}else{
		cout<<h;
	}
	cout<<":";
	if(m<10){
		cout<<"0"<<m;
	}else{
		cout<<m;
	}
	
 return 0;   
}
