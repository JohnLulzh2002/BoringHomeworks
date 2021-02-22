#include<stdio.h>
int main(){
	int n,i,a[9];
	while(~scanf("%d",&n)){
		if(n<0){
			a[0]=1;
			n=-n;
		}
		else	a[0]=0;
		for(i=7;i;i--){
			a[i]=n%2;
			n/=2;
		}
		for(i=0;i<8;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}