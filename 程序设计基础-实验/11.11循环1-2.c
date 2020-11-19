#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d",&a)+1){
		b=0;
		while(a){
			b=b*10+a%10;
			a/=10;
		}
		printf("%d\n",b);
	}
	return 0;
}
