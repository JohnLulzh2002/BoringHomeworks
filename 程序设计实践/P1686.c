#include<stdio.h>
int f(int n){
	if(n==1)return 1;
	return f(n-1)+2*(n-1);
}
int main(){
	int n;
	while(~scanf("%d",&n))
		printf("%d\n",f(n)+1);
	return 0;
}