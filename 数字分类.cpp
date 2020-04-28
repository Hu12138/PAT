#include<iostream>
#include <iomanip>
using namespace std;
int getA1(int a1[],int p1){
    int count = 0;
    for(int i = 0; i<p1; i++){
        if(a1[i]%2 == 0){
            count += a1[i];
        }
    }
    return count;
}
int getA2(int a2[],int p2){
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i<p2; i++){
        if(i%2 == 0){
            count1 += a2[i];
        }else{
            count2 += a2[i];
        }
    }
    return count1 - count2;
}
float getA4(int a4[],int p4){
    int count =0;
    for (int i = 0; i<p4; i++){
        count += a4[i];
    }
    return (count*1.0)/p4*1.0;
}
int getA5(int a5[],int p5){
    int max = -1;
    for(int i =  0; i<p5; i++){
        if(a5[i] > max){
            max = a5[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[10000];
    int a1[10000],a2[10000],a3[10000],a4[10000],a5[10000];
    int p1,p2,p3,p4,p5;
    p1 = p2 = p3 = p4 = p5 = 0;
    int temp;
    for(int i = 0; i<n; i++){
        cin>>temp;
        switch((temp%5)){
            	case 0: {a1[p1++] = temp; continue;}
                 case 1: {a2[p2++] = temp; continue;}
                 case 2: {a3[p3++] = temp; continue;}
                 case 3: {a4[p4++] = temp; continue;}
                 case 4: {a5[p5++] = temp; continue;}
        }
    }
    if(p1 == 0 or (getA1(a1,p1) == 0)){
    	cout<<"N";
	}else{
		cout<<getA1(a1,p1);	
	}
    cout<<" ";
	if( p2==0){
		cout<<"N";
	}else{
		cout<<getA2(a2,p2);
	}
	cout<<" ";
	if(p3 == 0){
		cout<<"N";
	}else{
		cout<<p3;
	}
	cout<<" ";
	if(p4 == 0){
		cout<<"N";
	}else{
		cout<<fixed<<setprecision(1)<<getA4(a4,p4);
	}
	cout<<" ";
	if(p5 == 0){
		cout<<"N";
	}else{
		cout<<getA5(a5,p5)<<endl;
	}
    
 return 0;   
}
