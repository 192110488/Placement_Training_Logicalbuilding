#include<stdio.h>
int main(){
	int N=8,s=1;
	int arr[]={1,2,4,5,3,7,8};
	while(s<=8){
		int flag=0;
		for(int i=0;i<N-1;i++){
			if(arr[i]==s){flag=1;break;}
			else{continue;}
		}
		if(flag==0){printf("The missing number : %d",s);break;}
		s++;
	}
}
