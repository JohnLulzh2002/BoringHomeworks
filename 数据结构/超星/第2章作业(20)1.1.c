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
struct Node *reverse(struct Node*head){
	struct Node *p=head->next,*q=p->next;
	free(head);
	p->next=NULL;
	while(head=q->next){
		q->next=p;
		p=q;
		q=head;
	}
	q->next=p;
	head=malloc(sizeN);
	head->next=q;
	return head;
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
	head=reverse(head);
	output(head);
	return 0;
}