#include<stdio.h>
#include<string.h>
char s[1001];
int main(){
	int l,n;
	while(~scanf("%d",&n)){
		while(n--){
			scanf("%*c");
			scanf("%[^\n]",s);
			for(l=strlen(s);l;l--)
				printf("%c",s[l-1]);
			printf("\n");
		}
	}
	return 0;
}