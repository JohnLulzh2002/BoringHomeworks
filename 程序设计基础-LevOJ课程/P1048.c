#include<stdio.h>
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b))
		printf("%d %d\n",a/b,a%b);
	return 0;
}