#include<stdio.h>
int main(){
	int a[36]={0,1,2};
	int i=3,n;
	for(;i<36;i++)
		a[i]=a[i-1]+a[i-2];
	while(~scanf("%d",&n))
		printf("%d\n",a[n]);
	return 0;
}