#include<stdio.h>
#include<string.h>
int main(){
	int n,i=0,j,k;
	char s[100][20],t[20];
	scanf("%d",&n);
	for(;i<n;i++)
		scanf("%s",s[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])<0)
				continue;
			if(strcmp(s[i],s[j])>0){
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
				continue;
			}
		}
	for(i=0;i<n;i++)
		if(strcmp(s[i],"China"))
			printf("%s\n",s[i]);
	printf("China");
	return 0;
}
