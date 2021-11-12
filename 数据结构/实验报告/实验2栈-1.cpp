#include<cstdio>
#include<cstdlib>
#include<string>
#define SIZE 100
using namespace std;
struct stack{
	int data[SIZE];
	int top;
	stack():top(0){}
};
int bug(int n){
	printf("Error %d: stack is ",n);
	switch(n){
	case 1:
		printf("full!\n");
		break;
	case 2:
		printf("empty!\n");
		break;
	}
	return n;
}
void push(stack& s,int n){
	if(s.top>=SIZE)
		throw bug(1);
	s.data[s.top++]=n;
}
int pop(stack& s){
	if(s.top<=0)
		throw bug(2);
	return s.data[--s.top];
}
void show(stack& s){
	if(s.top<=0)
		throw bug(2);
	const char d[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	while(s.top)
		putchar(d[pop(s)]);
	putchar('\n');
}
stack convert(int n,int base){
	stack s;
	while(n){
		push(s,n%base);
		n/=base;
	}
	return s;
}
int main(){
	srand(0);
	int n=rand();
	printf("%d\n",n);
	stack s;
	s=convert(n,10);
	printf("Base 10: ");
	show(s);
	s=convert(n,2);
	printf("Base 2 : ");
	show(s);
	s=convert(n,8);
	printf("Base 8 : ");
	show(s);
	s=convert(n,16);
	printf("Base 16: ");
	show(s);
	return 0;
}