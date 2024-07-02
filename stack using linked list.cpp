#include<stdio.h>
#include<stdlib.h>
int count=0;
struct Node{
	int num;
	struct Node *next;
};
struct Node *head=NULL,*n,*temp,*prev,*poptemp,*distemp,*search;

void push(){
	int item;
	n=(struct Node *)malloc(sizeof(struct Node));
	printf("enter number:");
	scanf("%d",&item);
	n->num=item;
	n->next=NULL;
	count++;
	if(head==NULL)
    {
        head=n;
        temp=head;
    }
    else
    {
        temp->next=n;
        temp=n;
    }
}

void pop(){
	poptemp=head;
	if(poptemp->next==NULL){
		free(poptemp);
		head=NULL;
		temp=head;
		count--;
	}
	else if(poptemp->next!=NULL){
		while(poptemp->next!=NULL){
			prev=poptemp;
			poptemp=poptemp->next;
		}
		prev->next=NULL;
		temp=prev;
		count--;
	}
}

void display(){
	distemp=head;
	printf("\n");
	while(distemp!=NULL){
		printf("%d->",distemp->num);
		distemp=distemp->next;
	}
	printf("NULL");
	printf("\n");
}

void middlesearch(){
	search=head;
	int middle=(count/2)+1,k=0;
	while(search!=NULL)
	{	k++;
		if(k==middle){printf("\nmiddle element= %d\n",search->num);}
		search=search->next;
	}
	//printf("NULL");
	printf("\n");
}
 
int main(){

    int choice;
    while(1){
		printf("\n1.push\n2.pop\n3.display\n4.middlesearch\n5.exit\n");
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
				middlesearch();
				break;
			case 5:
				exit(1);
				break;
			default:
				printf("enter proper data..");
				break;
		}
	} 
}
