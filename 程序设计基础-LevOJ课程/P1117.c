#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i=0,j,k;
	char s[40][8],t[8];
	scanf("%d",&n);
	for(;i<n;i++)
		scanf("%s",s[i]);
	qsort(s,n,sizeof(s[0]),strcmp);
	for(i=0;i<n;i++)
		if(strcmp(s[i],"China"))
			printf("%s\n",s[i]);
	printf("China");
	return 0;
}