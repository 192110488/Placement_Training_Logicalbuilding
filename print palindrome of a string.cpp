#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter the string::");
	scanf("%s",str);
	//char str1[10]='\0';
	int size=strlen(str);
	for(int i=0;i<size;i++){
		char str1[10]="";
		char str2[10]="";
		char str3[10]="";int s=0;
		for(int j=i;j<size;j++){
			str3[s++]=str[j];
			strcat(str1,str3);
			strcpy(str2,strrev(str1));
			if(strcmp(str1,str2)==0){
				printf("%s\n",str1);
			}
		}
	}
	//printf("%d ",strlen(str));
}
