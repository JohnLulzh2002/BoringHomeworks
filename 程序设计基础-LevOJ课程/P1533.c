#include<stdio.h>
int main(){
	int i;
	char s[10001];
	while(scanf("%s",s)==1){
		for(i=0;s[i]=='*';i++)
			printf("*");
		for(;s[i];i++)
			if(s[i]!='*')
				printf("%c",s[i]);
		printf("\n");
	}
	return 0;
}
