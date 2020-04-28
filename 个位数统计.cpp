#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "";
    cin>>str;
    int count[10]={0};
    for(int i = 0; i<str.length();i++){
        int temp;
        temp = str[i]-'0';
        switch(temp){
            	case 0:count[0]++;continue;
                case 1:count[1]++;continue;
                case 2:count[2]++;continue;
                case 3:count[3]++;continue;
                case 4:count[4]++;continue;
                case 5:count[5]++;continue;
            	case 6:count[6]++;continue;
                case 7:count[7]++;continue;
                case 8:count[8]++;continue;
                case 9:count[9]++;continue;
        }
    }
    for(int j = 0; j<10;j++){
        if(count[j]>0){
            cout<<j<<":"<<count[j]<<endl;
        }
    }
    return 0;
}
