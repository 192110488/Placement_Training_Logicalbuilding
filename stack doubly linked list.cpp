#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int num;
	struct Node *next;
};

struct Node *head=NULL,*n,*temp;

int main(){
	int item;
	while(1){
		printf("enter the element(-1 to stop):");
		scanf("%d",&item);
		if(item==-1)
			break;
		n=(struct Node *)malloc(sizeof(struct Node));
		n->prev=NULL;
		n->num=item;
		n->next=NULL;
		if(head==NULL){
			n->prev=NULL;
			n->num=item;
			n->next=NULL;
			head=n;
			temp=head;
		}
		else{
			n->prev=temp;
			n->num=item;
			n->next=NULL;
			temp->next=n;
			temp=n;
		}
	}
	temp=head;
	printf("NULL->");
	while(temp!=NULL){
		printf("%d->",temp->num);
		temp=temp->next;
	}
	printf("NULL"); 
		
}
