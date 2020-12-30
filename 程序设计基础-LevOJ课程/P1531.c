#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i,j,t,p;
	char s[100][102],ans[102];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%*c%[^\n]",s[i]);
	qsort(s,n,sizeof(s[0]),strcmp);
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
	return 0;
}