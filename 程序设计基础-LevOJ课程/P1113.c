#include<stdio.h>
int main(){
	int n,i,a[1001]={};
	for(scanf("%d",&n);n+1;scanf("%d",&n))
		a[n]++;
	for(i=1;i<1001;i++)
		if(a[i])
			printf("%d %d\n",i,a[i]);
	return 0;
}
