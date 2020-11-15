#include<stdio.h>
int main(){
	int n,m,a,b;
	while(scanf("%d%d",&m,&n)==2){
		if(n%2){
			printf("-1 -1\n");
			continue;
		}
		n-=2*m;
		if(n<0){
			printf("-1 -1\n");
			continue;
		}
		b=n/2;
		a=m-b;
		if(a<0){
			printf("-1 -1\n");
			continue;
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}
