#include<stdio.h>
#include<stdlib.h>
#define size 5
int qu[size],front=-1,rear=-1;
void enqueue(){
	if(rear==size-1){printf("\noverflow.\n");}
	else{
		printf("enter the element:");
		scanf("%d",&qu[++rear]);
		if(rear==0){front=0;}
	}
}

void display(){
	printf("The elements of the queue are:\n");
	if(rear==-1)
		printf("\nQueue is Empty");
	else{
		
		for(int i=front;i<=rear;i++){
			printf("%d ",qu[i]);
		}
	}
	printf("\n");
}

void dequeue(){
	if((rear==-1)||(front>rear)){printf("\nqueue is empty.\n");}
	else if(front==rear){printf("\ndequeue element::%d\nqueue empty..",qu[front]);front=rear=-1;}
	else{printf("\ndequeue element::%d\n",qu[front]);front++;}
}

int main(){
	int ch;
	while(1){
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter the choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				enqueue();
				display();
				break;
			case 2:
				dequeue();
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("choose the correct option.");
		}
	} 
}
