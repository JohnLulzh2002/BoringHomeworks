#include<stdio.h>
#define Min(a,b) (a)>(b)?(b):(a)
int a[1001][1001];
int main(){
	int n;
	while(~scanf("%d",&n)){
		int i,j;
		for(i=0;i<n;i++)for(j=0;j<=i;j++)
			scanf("%d",&a[i][j]);
		n--;
		while(n--)for(i=0;i<=n;i++)
			a[n][i]+=Min(a[n+1][i],a[n+1][i+1]);
		printf("%d\n",a[0][0]);
	}
	return 0;
}