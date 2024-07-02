#include<stdio.h>
int main(){
	int a[]={13,7,6,12},size=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size;i++){
		int flag=0;
		for(int j=i+1;j<=size-1;j++){
			if(a[i]<a[j]){
				printf("%d -> %d\n",a[i],a[j]);
				flag=1;
				break;
			}
			else{continue;}
		}
		if(flag==0){
			printf("%d -> -1\n",a[i]);	
		}
		
	}
}

