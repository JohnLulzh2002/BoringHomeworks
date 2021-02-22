#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		n%=7;
		if(!n)n=7;
		printf("%d\n",n);
	}
	return 0;
}