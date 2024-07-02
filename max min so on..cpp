#include<stdio.h>
int main(){
	int n,i=0;
	int a[]={1,2,3,4,5,6},ans[10];
	n=sizeof(a)/sizeof(a[0]);
	int x=0,y=n-1;
	while(x<y){
		ans[i]=a[y];
		ans[i+1]=a[x];
		i=i+2;y--;x++;
	}
	printf("The sequence:\n");
	for(int j=0;j<i;j++){
		printf("%d ",ans[j]);
	}
	
}
