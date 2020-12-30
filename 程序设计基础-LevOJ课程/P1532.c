#include<stdio.h>
#include<string.h>
int main(){
	char s[10001];
	int i,l,t;
	while(~scanf("%[^\n]",s)){
		scanf("%*c");
		l=strlen(s);
		t=1;
		for(i=0;i*2<l;i++)
			if(s[i]!=s[l-i-1]){
				t=0;
				break;
			}
		if(t)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}