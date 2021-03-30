#include<stdio.h>
#include<stdlib.h>
typedef struct q{
	int data;
	struct q *next;
}Node;
int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		int i=n;
		Node *head,*p,*t;
		head=p=malloc(sizeof(Node));
		while(i--){
			p->data=n-i;
			p->next=malloc(sizeof(Node));
			t=p;
			p=p->next;
		}
		free(p);
		t->next=head;
		while(head->next!=head){
			i=m;
			while(--i){
				t=head;
				head=head->next;
			}
			p=head;
			t->next=head=head->next;
			printf("%d ",p->data);
			free(p);
		}
		printf("%d\n",head->data);
		free(head);
	}
	return 0;
}