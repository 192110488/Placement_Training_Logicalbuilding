#include<stdio.h>
#include<stdlib.h>
struct Node{
	int num;
	struct Node *next;
	struct Node *prev;
};

int main(){
	int no;
	struct Node *prev=NULL,*next=NULL,*n,*head=NULL,*temp;
	n=(struct Node*)malloc(sizeof(struct Node));
	while(1){
		printf("enteer the data:");
		scanf("%d",&no);
		if(no==-1){break;}
		n->num=no;
		n->next=NULL;
		n->prev=NULL;
		if(head==NULL){
			head=n;
			temp=head;
		}
		else{
			temp->next=n;
			n->prev=temp;
			temp=n;
		}
	}
	temp=head;
	printf("NULL<-");
	while(temp){
		printf("%d->",temp->num);
		temp=temp->next;
	}
	printf("NULL");
}
