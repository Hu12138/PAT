#include<iostream>
#include<algorithm>
using namespace std;
typedef struct student{
	int num;
	int de;
	int cai;
}stu;
bool cmp(stu p, stu q){
	if((p.cai + p.de) != (q.cai + q.de)) return (p.cai + p.de) > (q.cai + q.de);
	if((p.cai + p.de) == (q.cai + q.de) && p.de != q.de)
		return  p.de > q.de;
	if((p.cai + p.de) == (q.cai + q.de) && p.de == q.de)
	return p.num < q.num;
}
void sort_bubble(stu *student1, int count1){
		int i = 0;
		int j = 0;
	for(i = 0; i<count1; i++){
		for(int j = i; j<count1; j++){
			if((student1[i].cai + student1[i].de) <(student1[j].cai + student1[j].de))
			{
				stu temp;
				temp = student1[i];
				student1[i] =  student1[j];
				student1[j] = temp;
			}else if((student1[i].cai + student1[i].de) == (student1[j].cai + student1[j].de))
			{
				if(student1[i].de < student1[j].de ){
				stu temp;
				temp = student1[i];
				student1[i] =  student1[j];
				student1[j] = temp;
				}else if(student1[i].de == student1[j].de){
					if(student1[i].num > student1[j].num){
						stu temp;
				temp = student1[i];
				student1[i] =  student1[j];
				student1[j] = temp;
					}
				}
			}
		}
	} 
}
void print(stu *student1,int count1){
	int i = 0;
	for(i = 0; i<count1; i++){
		cout<<student1[i].num<<" "<<student1[i].de<<" "<<student1[i].cai<<endl;
	}
}
int main(){
	int N,L,H;
	cin>>N>>L>>H;
	stu stds[100010];
	int i;
	for( i = 0; i<N; i++){
		cin>>stds[i].num>>stds[i].de>>stds[i].cai;
	} 
//	cout<<stds[3].de;

	stu student1[10000],student2[10000],student3[10000],student4[10000];
	int count1,count2,count3,count4 =0;
	count1=count2=count3=count4;
	//·ÖÀà 
	for( i = 0; i<N; i++ ){
		if(stds[i].de >= H && stds[i].cai >= H){
			student1[count1++] = stds[i];
		}else if(stds[i].de >= H && stds[i].cai <H && stds[i].cai >=L){
			student2[count2++] = stds[i];
		}else if(stds[i].de < H && stds[i].cai < H && stds[i].de >= stds[i].cai && stds[i].de >= L){
			student3[count3++] = stds[i];
		}else if(stds[i].de >= L && stds[i].cai >= L){
			student4[count4++] = stds[i];
		}
	}
	//ÅÅĞò
	sort(student1,student1+count1-1,cmp);
//	sort(student2,count2);
//	sort(student3,count3);
//	sort(student4,count4);
	cout<<endl;
	//Êä³ö 
	print(student1,count1);
//	print(student2,count2);
//	print(student3,count3);
//	print(student4,count4);
 return 0;   
}

