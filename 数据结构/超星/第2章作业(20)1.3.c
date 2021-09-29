#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
const int sizeN=sizeof(struct Node);
void output(struct Node*head){
	while(head=head->next)
		printf("%d	",head->data);
	printf("\n");
}
void insert(struct Node*head,int n){
	struct Node *p=head,*q=p;
	while(q=q->next){
		if(q->data>n)
			break;
		p=q;
	}
	struct Node *t=malloc(sizeN);
	t->data=n;
	t->next=q;
	p->next=t;
}
int main(){
	struct Node *head=malloc(sizeN),
		*p=head,*q;
	head->next=p;
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		q->data=n;
		q->next=NULL;
		p=p->next=q;
		q=malloc(sizeN);
	}
	p->next=NULL;
	free(q);
	output(head);
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		insert(head,n);
	}
	output(head);
	return 0;
}