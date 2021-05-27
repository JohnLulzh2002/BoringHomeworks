#include<stdio.h>
int main(){
	int n,k;
	while(~scanf("%d%d",&n,&k)){
		n-=k;
		k=200/n;
		if(n*k<200)k++;
		if(k>=0&&k<21)printf("%d\n",k);
		else	printf("Impossible\n");
	}
	return 0;
}