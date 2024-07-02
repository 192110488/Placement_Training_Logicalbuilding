#include<stdio.h>
#include<stdlib.h>
int count=0;
struct Node{
	int num;
	struct Node *next;
};
struct Node *front=NULL,*n,*rear,*distemp;

void enqueue(){
	int item;
	n=(struct Node *)malloc(sizeof(struct Node));
	printf("enter number:");
	scanf("%d",&item);
	n->num=item;
	n->next=NULL;
	count++;
	if(front==NULL)
    {
        front=n;
        rear=front;
    }
    else
    {
        rear->next=n;
        rear=n;
    } 
}

void dequeue(){
	if(count==0){
		printf("The queue is empty..");
	}
	else{
		front=front->next;
		count--;
	}
	
}

void display(){
	distemp=front;
	printf("\n");
	while(distemp!=NULL){
		printf("%d->",distemp->num);
		distemp=distemp->next;
	}
	printf("NULL");
	printf("\n");
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
				//display();
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
