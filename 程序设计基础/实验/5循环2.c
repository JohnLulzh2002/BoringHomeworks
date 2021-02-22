#include<stdio.h>
int main(){
	int i;
	char a[20];
	while(scanf("%s",a)+1){
		for(i=0;a[i];i++)
			if(!((a[i]-'0')%2))
				printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
