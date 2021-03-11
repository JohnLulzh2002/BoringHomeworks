#include<stdio.h>
int main(){
	char s[100002],t[100002];
	int i,j;
	while(~scanf("%s%s",s,t)){
		i=j=0;
		while(s[i]){
			if(!t[j]){
				printf("No\n");
				break;
			}
			if(s[i]==t[j++])
				i++;
		}
		if(!s[i])
			printf("Yes\n");
	}
	return 0;
}