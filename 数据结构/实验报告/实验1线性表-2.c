#include<stdio.h>
#include<stdlib.h>
typedef struct _Node{
	int data;
	struct _Node* next;
}Node;
void show(Node* p){
	do{
		printf("%d ",p->data);
	}while(p=p->next);
	printf("\n");
}
Node* merge(Node*a,Node*b){
	Node *c=malloc(sizeof(Node)),
		*head=c;
	while(a && b){
		if(a->data < b->data){
			c=c->next=a;
			a=a->next;
		}else{
			c=c->next=b;
			b=b->next;
		}
		c->next=NULL;
	}
	if(a)	c->next=a;
	else	c->next=b;
	return head->next;
}
int main(){
	srand(1);
	Node *a,*b,*p;
	int i,n=rand()/1000;
	a=malloc(sizeof(Node));
	a->data=n;
	a->next=NULL;
	p=a;
	for(i=0;i<9;i++){
		p=p->next=malloc(sizeof(Node));
		p->data=n+=rand()/1000;
		p->next=NULL;
	}
	show(a);
	n=rand()/1000;
	b=malloc(sizeof(Node));
	b->data=n;
	b->next=NULL;
	p=b;
	for(i=0;i<9;i++){
		p=p->next=malloc(sizeof(Node));
		p->data=n+=rand()/1000;
		p->next=NULL;
	}
	show(b);
	Node* c=merge(a,b);
	show(c);
	return 0;
}