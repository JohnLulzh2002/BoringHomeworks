#include<stdio.h>
#include<string.h>
int main(){
	int n,l,i,t;
	char s[1000];
	while(scanf("%d",&n)==1){
		for(;n;n--){
			scanf("%*c");
			scanf("%[^\n]",s);
			l=strlen(s);
			t=1;
			for(i=0;i<l/2;i++)
				if(s[i]-s[l-i-1]){
					printf("No\n");
					t=0;
					break;
				}
			if(t)printf("Yes\n");
		}
	}
	return 0;
}
