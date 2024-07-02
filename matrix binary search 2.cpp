#include<stdio.h>
int binary(int start,int end,int r,int c,int n,int a[4][4]){
	int mid=(start+end)/2;
	if(a[mid/c][mid%c]==n){
		printf("element at: %d,%d",(mid/c),(mid%c));
	}
	else if(n>a[mid/c][mid%c]){
		start=mid+1;
		return binary(start,end,r,c,n,a);
	}
	else if(n<a[mid/c][mid%c]){
		end=mid-1;
		return binary(start,end,r,c,n,a);
	}
}
int main(){
	int n,r,c,start=0,end;
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	printf("Target :");
	scanf("%d",&n);
	r=sizeof(a)/sizeof(a[0]);
	c=sizeof(a[0])/sizeof(a[0][0]);
	end=r*c;
	binary(start,end,r,c,n,a);
}
