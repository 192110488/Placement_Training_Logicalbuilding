#include<stdio.h>
#include<string.h>
int main(){
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	//char c[2];
	char c1[]="->";
	char c2[]="<-";
	
	for(int i=0;i<4;i++){
			if(i%2==0){
				for(int j=0;j<4;j++){
				printf("%d %s ",a[i][j],c1);}}
			else{
				for(int j=3;j>=0;j--){
				printf("%d %s ",a[i][j],c2);}}
		printf("\n");
		//strcpy()
	}
}
