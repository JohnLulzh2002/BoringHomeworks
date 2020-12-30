#include<stdio.h>
int main(){
	int n,k,i,a[101];
	while(~scanf("%d%d",&n,&k)){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=k;i<k+n;i++)
			printf("%d ",a[i%n]);
		printf("\n");
	}
	return 0;
}