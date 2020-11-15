#include<stdio.h>
int main(){
	unsigned long long a[36];
	int i=3,n;
	a[1]=1;
	a[2]=2;
	for(;i<36;i++)
		a[i]=a[i-1]+a[i-2];
	while(scanf("%d",&n)==1)
		printf("%lld\n",a[n]);
	return 0;
}
