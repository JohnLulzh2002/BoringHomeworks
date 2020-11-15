#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		printf("%d %d\n",a/b,a%b);
	}
	return 0;
}
