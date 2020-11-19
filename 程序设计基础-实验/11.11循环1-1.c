#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char a[20];
	while(scanf("%s",a)+1){
		i=strlen(a)-1;
		while(a[i]=='0')i--;
		for(;i>=0;i--)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
