#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while((n--) != 0){
         long long a;
    long long b;
    long long c;
    cin>>a>>b>>c;
    if((a+b)>c){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    }
   
    return 0;
}
