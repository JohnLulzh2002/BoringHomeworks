#include<stdio.h>
int main(){
	char a[1001];
	int i;
	while(~scanf("%s",a)){
		for(i=-1;a[i+1];i++)
			if(a[i+1]-'*')
				printf("%c",a[i+1]);
		for(;a[i]=='*';i--)
			printf("*");
		printf("\n");
	}
	return 0;
}