#include<stdio.h>
int main(){
	char a[1001];
	int i;
	while(scanf("%s",a)+1){
		for(i=0;a[i];i++)
			if(a[i]-'*')
				printf("%c",a[i]);
		for(i--;a[i]=='*';i--)
			printf("*");
		printf("\n");
	}
	return 0;
}