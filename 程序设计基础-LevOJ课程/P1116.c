#include<stdio.h>
#include<string.h>
int main(){
	int l,n;
	char s[1001];
	while(~scanf("%d",&n))
		while(n--){
			scanf("%*c%[^\n]",s);
			for(l=strlen(s);l;l--)
				printf("%c",s[l-1]);
			printf("\n");
		}
	return 0;
}