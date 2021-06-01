#include<stdio.h>
#include<stdlib.h>
int a[1001][1001];
int main(){
	long long n,i,j;
	a[1][1]=1;
	for(i=2;i<1001;i++)
		for(j=1;j<=i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	scanf("%lld",&n);
	for(i=1;i<1000;i++)
		for(j=1;j*2<=i+1;j++)
			if(a[i][j]==n){
				printf("%d\n",i*(i-1)/2+j);
				return 0;
			}
	for(i=998;i<1888;i++)
		if(i*(i-1)*(i+1)==n*6){
			printf("%d\n",(i+2)*(i+1)/2+4);
			return 0;
		}
	for(i=998;i<55555;i++)
		if(i*(i+1)==n*2){
			printf("%d\n",(i+2)*(i+1)/2+3);
			return 0;
		}
	printf("%lld\n",n*(n+1)/2+2);
	fin:;
	return 0;
}