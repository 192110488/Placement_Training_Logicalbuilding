#include<stdio.h>
#include<stdlib.h>
#define size 5
void push();
void pop();
void display();
int top=-1;
int arr[size];
int main(){
	while(1){
		int choice;
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter the choices::");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:
				exit(0);
			default:
				printf("enter proper data..");
		}
	}
}
	
void push(){
	if(top==size-1){printf("\nover flow");}
	else{
		top=top+1;
		printf("enter the number::");
		scanf("%d",arr[top]);
	}
}

void pop(){
	if(top==-1){printf("\nno element to pop out.");}
	else{
		printf("\npoped element: %d",arr[top]);
		top=top-1; 
	}
}

void display(){
	if(top==-1){printf("\nno element to display  out.");}
	else{
		printf("\nelements in stack are:");
		 for(int i=top;i>=0;i--){
		 	printf("%d ",arr[i]);
		 } 
	}
}

