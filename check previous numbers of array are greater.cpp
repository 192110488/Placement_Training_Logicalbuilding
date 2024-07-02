#include<stdio.h>
int main(){
	int n;
	printf("Enter the n value:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(int i=0;i<n;i++){scanf("%d",&a[i]);}
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<=i;j++){
			if(a[i]>a[j]){
				continue;
				}
			else if(a[i]<=a[j]){
					printf("%d ",a[i]);
				flag=1;
			}
		}
		if(flag==0){
			printf("%d ",a[i]);}
	}
}
