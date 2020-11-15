#include<stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)==1){
		for(i=2;n>1;i++){
			while(n%i==0){
				n/=i;
				if(n-1)printf("%d ",i);
				else printf("%d",i);
			}
		}
		printf("\n");
	}
	return 0;
}
