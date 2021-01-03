#include<stdio.h>
int main(){
	int n,m,a,b;
	while(~scanf("%d%d",&m,&n)){
		if(n%2 || (n-=2*m)<0){
			printf("-1 -1\n");
			continue;
		}
		a=m-(b=n/2);
		if(a<0){
			printf("-1 -1\n");
			continue;
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}