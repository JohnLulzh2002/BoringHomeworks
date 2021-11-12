#include<cstdio>
#define SIZE 100
using namespace std;
struct stack{
	char data[SIZE];
	int top;
	stack() :top(0){}
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
void push(stack& s,char n){
	if(s.top>=SIZE)
		throw bug(1);
	s.data[s.top++]=n;
}
stack set(char* st){
	stack s;
	for(int i=0;st[i];i++)
		push(s,st[i]);
	return s;
}
char pop(stack& s){
	if(s.top<=0)
		throw bug(2);
	return s.data[--s.top];
}
// void show(stack s){
// 	if(s.top<=0)
// 		throw bug(2);
// 	stack reversed;
// 	while(s.top)
// 		push(reversed,pop(s));
// 	while(reversed.top)
// 		putchar(pop(reversed));
// 	putchar('\n');
// }
bool palindrome(stack s){
	bool odd=s.top%2;
	stack a;
	int n=s.top/2;
	for(int i=0;i<n;i++)
		push(a,pop(s));
	if(odd)	pop(s);
	while(s.top)
		if(pop(a)!=pop(s))
			return false;
	return true;
}
int main(){
	char st[100];
	scanf("%s",st);
	stack s=set(st);
	// show(s);
	if(palindrome(s))
		printf("yes");
	else
		printf("no");
	return 0;
}