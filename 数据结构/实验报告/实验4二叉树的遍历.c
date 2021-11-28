#include<stdio.h>
#include<stdlib.h>
typedef struct temp{
	char data;
	struct temp *ls,*rs;
} Node;
const char treedata[]=".ABE#C#F..D#..G#....##......HK..........................####....";
void pre(Node* a,int pos){
	// putchar(treedata[pos]);
	a->data=treedata[pos];
	if(a->data!='#'){
		a->ls=malloc(sizeof(Node));
		a->rs=malloc(sizeof(Node));
		pre(a->ls,pos*2);
		pre(a->rs,pos*2+1);
	}else
		a->ls=a->rs=NULL;
}
void in(Node* a){
	if(a->data=='#')
		return;
	in(a->ls);
	putchar(a->data);
	in(a->rs);
}
void in2(Node* a){
	Node* stack[33]={};
	int top=1,back=0;
	while(top){
		if(!back && a->ls->data!='#'){
			stack[top++]=a;
			a=a->ls;
			continue;
		}
		putchar(a->data);
		back=0;
		if(a->rs->data!='#'){
			a=a->rs;
			continue;
		}
		a=stack[--top];
		back=1;
	}
}
int main(){
	Node* root=malloc(sizeof(Node));
	pre(root,1);
	// in(root);
	in2(root);
	return 0;
}