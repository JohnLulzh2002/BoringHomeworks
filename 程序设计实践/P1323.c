#include<stdio.h>
int main(){
	int a[26]={0,1,2};
	int i=3,n;
	for(;i<26;i++)
		a[i]=a[i-1]+a[i-2];
	while(~scanf("%d",&n))
		printf("%d\n",a[n]);
	return 0;
}