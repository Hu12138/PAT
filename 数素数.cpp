#include<iostream>

using namespace std;
bool isSu(int n){
    if(n == 2){
            return true;
        }
    if((n & 1 ) == 0){
        return false;
    }
    for(int i = 3; i*i<=n; i += 2){
        if(n % i == 0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int i = 2;
    int count =0;
    int a[10000];
    while(count<10000){
        if(isSu(i)){
            a[count++] = i;
            i++;
        }else{
            i++;
        }
    }
    int M,N;
    cin>>M>>N;
    cout<<a[M-1];
    for(int j = M; j<N; j++){
    	if((j+1 - M)%10 == 0){
    		cout<<"\n";
    		cout<<a[j];
    		continue;
		} 
        cout<<" "<<a[j];
    }
 return 0;   
}
