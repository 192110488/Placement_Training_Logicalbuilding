#include<stdio.h>
int main(){
	int n;
	printf("enter the noof rows:");
	scanf("%d",&n);
	int k=n,st=0,end=n*2,des,asc;
	//part 1
	for(int i=1;i<=n;i++){
		des=n;asc=k;
		for(int j=1;j<n*2;j++){
			if(j>st && j<end){printf("%d ",k);}
			else if(j<=st){printf("%d ",des--);}
			else if(j>=end){printf("%d ",++asc);}
		}
		st++;
		end--;
		k--;
		printf("\n"); 
	}
	k=k+2;st--;end++;
	// part 2
	for(int i=1;i<n;i++){
		des=n;asc=k;
		for(int j=1;j<n*2;j++){
			if(j>=st && j<=end){printf("%d ",k);}
			else if(j<st){printf("%d ",des--);}
			else if(j>end){printf("%d ",++asc);}
		}
			st--;
			end++;
			k++;
		printf("\n"); 
	}
}
