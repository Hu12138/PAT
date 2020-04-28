#include<iostream>
#include<string>
using namespace std;

string invert(int n){
	switch(n){
		case 0: return "ling";
		case 1: return "yi"; 
		case 2: return "er";
		case 3: return "san";
		case 4: return "si";
		case 5: return "wu";
		case 6: return "liu";
		case 7: return "qi";
		case 8: return "ba";
		case 9: return "jiu";
	}
	return "0";
}
int main(){
	string str;
	int count = 0;
	cin>>str;
	for(unsigned int i = 0; i<str.length(); i++){
		//cout<<str[i];
		count += (int)(str[i]-'0');
	}
	//cout<<count<<endl;
	//string str2(count);
	int n = 0;
	string result[10000];
	int p = 0;//¼ÆÊý 
	if(count == 0){
		cout<<"ling";
	}
	while((n = count%10)!=0){
		count /= 10;
		
		result[p++] = invert(n);
	}
	for(int j= p-1; j>=0; j--){
		cout<<result[j];
		if(j != 0){
			cout<<" ";
		}
	}
	
	return 0;
}
