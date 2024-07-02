#include<stdio.h>
int main(){
	int n,m,count=0;
	printf("enter the values: ");
	scanf("%d%d",&n,&m);
	int k=(n^m);
		printf("%d ",k);
	while(k!=0){
		int rem=k%2;
		if(rem==1){count++;}
		k=k/2;
	}
 
	printf("%d ",count);
}
