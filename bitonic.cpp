#include<stdio.h>
int main()
{
	int arr[]={6,7,8,9,10,5,2,1},flag=0,k;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=size-1;i++){
		if(arr[i]>arr[i+1]){printf("%d ",arr[i]);k=i;break;}
	}
	for(int j=k;j<=size-1;j++){
		if(arr[j]<arr[j+1]){printf(" no ");flag=1;break;}
	}
	if(flag=0){printf("%d ",arr[k]);}
}
