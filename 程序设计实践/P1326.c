#include<stdio.h>
int main(){
	int n,m,t;
	while(~scanf("%d/%d%d",&n,&m,&t)){
		printf("%d.",n/m);
		n%=m;
		while(t-- && n){
			n*=10;
			printf("%d",n/m);
			n%=m;
		}
		printf("\n");
	}
	return 0;
}