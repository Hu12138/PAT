#include <iostream>
#include <algorithm>
#include<string>
#include "math.h"
using namespace std;
int main(){
	string str0("");
	string str1("");
	string str2("");
	cin>>str0;
//	cout<<str0;
	str1=   str0.substr(1,str0.find("E")-1);//��ֵ���� 
	//cout<<str1<<endl;
	str2= str0.substr(str0.find("E")+1,str0.length());//�����ŵ�ָ������ 
	//cout<<str1<<endl<<str2;
	if(str0[0] == '-') {
		cout<<'-';//��������� 
	}
	string str10("");
	string str11(""); 
	//str10 = str1.substr(0,str1.find("."));
	//str10 = str1[0];//С����ǰ 
	str11 = str1.substr(str1.find(".")+1,str1.length());//С����� 
	char sign1 = str0[0];//��ֵ���� 
	char sign2 = str2[0];//ָ������
	string str20("");//ȥ����
	str20 = str2.substr(1,str2.length());
	string str21("");//����
	reverse(str20.begin(),str20.end());
	int m = 0;//ָ��������ֵ 
	for(int i = 0; i<str20.length();i++){
		int t ;
		t = str20[i] -'0';
		m += t*pow(10,i);
	}
	if(sign2 == '+'){
		//���������� 
		 if(str11.length()<=m){
		 	//����
			 int n1 = m-str11.length();//n1�ǲ������ 
			 cout<<str1[0]<<str11;
			 for(int ii = 0; ii<n1; ii++){
			 	cout<<'0';
			 } 
		 }else{
		 	//ȷ�� С����λ�� 
		 	int n2 = str11.length()-m;//n2��С�����ƶ�λ�� 
		 	cout<<str1[0];
		 	cout<<str11.substr(0,n2-1)<<"."<<str11.substr(n2,str11.length());
		 }
		
	} else{
		//��С�� 
		cout<<"0.";
		//����
		 for(int jj = 0; jj<m-1; jj++){
			 	cout<<'0';
				 }
		cout<<str1[0]<<str10<<str11;
	} 
	
	return 0;
}



