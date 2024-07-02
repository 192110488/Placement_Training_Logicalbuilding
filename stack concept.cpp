#include<stdio.h>
#include<stdlib.h>
#define size 5 
int top=-1;
int arr[size];
	
void push(){
	if(top==size-1){printf("\nover flow");}
	else{
		top=top+1;
		printf("enter the number::");
		scanf("%d",&arr[top]);
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

int main(){
	int choice=1;
	while(choice!=0){
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter the choices::");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("enter proper data..");
				break;
		}
	} 
}

