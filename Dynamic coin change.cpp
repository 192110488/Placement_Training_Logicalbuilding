#include<stdio.h>
int min(int a,int b){
	return  a<b?a:b;
}
int main(){
	int n,N;
	printf("enter noof denominations:");
	scanf("%d",&n);
	printf("enter amount:");
	scanf("%d",&N);
	int d[n]={1,4,6},res[10],r=0;
	int c[n][N+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<=N;j++){
			if(j==0){c[i][j]=0;}
			else if(i==0){
				c[i][j]=1+c[i][j-d[i]];
			}
			else if(j<d[i]){
				c[i][j]=c[i-1][j];
			}
			else{
				int a=c[i-1][j];
				int b=1+c[i][j-d[i]];
				c[i][j]=min(a,b);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=N;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	//results
	n=n-1;
	while(N!=0)
	{
		if(c[n][N]==c[n-1][N]){
			n=n-1;
		}
		else{
			int a=c[n-1][N];
			int b=1+c[n][N-d[n]];
			if(c[n][N]==min(a,b)){
				res[r++]=d[n];
				N=N-d[n];
			}
		}
	}
	printf("Denomination should be included are:");
	for(int i=0;i<r;i++){printf("%d,",res[i]);}
}
